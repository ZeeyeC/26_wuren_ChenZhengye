# 导入必要的库
import pygame                          # 用于图形界面显示
from entity import Node                 # 导入节点类
from utils import colors, validator     # 导入颜色常量和边界验证工具
from utils.config import ROWS, SIZE, GAP  # 导入配置参数（行数、窗口大小、格子间距）
from queue import PriorityQueue         # 优先队列，用于高效获取f_score最小的节点


# 初始化Pygame窗口
WINDOW = pygame.display.set_mode((SIZE, SIZE))
pygame.display.set_caption('A* Pathfinder visualization')

# 全局变量：起点和终点节点
start = None   # 起点（橙色）
end = None     # 终点（青色）


def guess_distance(point1, point2):
    """
    启发函数：计算两点之间的曼哈顿距离
    Manhattan Distance: |x1 - x2| + |y1 - y2|
    因为网格中只能上下左右移动，不能斜走，所以用曼哈顿距离作为预估代价
    """
    x1, y1 = point1
    x2, y2 = point2
    return abs(x1 - x2) + abs(y1 - y2)


def reconstruct_path(came_from, current, grid):
    """
    路径重建函数：从终点回溯到起点，标记出最终路径
    :param came_from: 字典，记录每个节点的父节点（用于路径回溯）
    :param current: 当前节点（初始为终点）
    :param grid: 整个网格
    """
    # 从终点开始，一直回溯到起点
    while current in came_from:
        current = came_from[current]  # 获取父节点
        if current != start:          # 起点不标记为路径
            current.make_path()       # 标记为紫色路径
        draw(grid)                    # 实时更新画面


def a_star_algorithm(grid):
    """
    A* 路径搜索算法核心实现
    A* 算法通过评估函数 f(n) = g(n) + h(n) 来找到最优路径
    - g(n): 从起点到节点n的实际代价
    - h(n): 从节点n到终点的预估代价（启发函数）
    - f(n): 总代价
    """
    count = 0                           # 计数器，用于优先队列排序（当f_score相同时使用）
    open_set = PriorityQueue()          # 优先队列：存储待探索的节点，按f_score升序排列
    open_set.put((0, count, start))     # 初始将起点加入队列 (f_score, count, node)
    
    came_from = {}                      # 字典：记录路径，key=节点, value=父节点
    
    # g_score: 从起点到每个节点的实际代价，初始化为无穷大
    g_score = {node: float("inf") for row in grid for node in row}
    g_score[start] = 0                  # 起点到自己的代价为0
    
    # f_score: 每个节点的总代价，初始化为无穷大
    f_score = {node: float("inf") for row in grid for node in row}
    f_score[start] = guess_distance(start.get_position(), end.get_position())  # 起点的f_score

    open_set_hash = {start}             # 集合：快速判断节点是否在open_set中（PriorityQueue查找效率低）

    # 主循环：只要还有待探索的节点
    while not open_set.empty():
        # 处理退出事件（防止算法运行时窗口卡死）
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()

        # 获取f_score最小的节点（优先队列的第一个元素）
        current = open_set.get()[2]     # [0]=f_score, [1]=count, [2]=node
        open_set_hash.remove(current)   # 从集合中移除

        # 找到终点 重建路径并返回
        if current == end:
            reconstruct_path(came_from, end, grid)
            end.make_end()              # 确保终点保持青色
            return True

        # 遍历当前节点的所有相邻节点
        for neighbor in current.neighbors:
            # 计算通过当前节点到达邻居的临时g_score（每步代价为1）
            temp_g_score = g_score[current] + 1

            # 如果找到更优路径（更小的g_score）
            if temp_g_score < g_score[neighbor]:
                came_from[neighbor] = current           # 更新父节点
                g_score[neighbor] = temp_g_score        # 更新实际代价
                f_score[neighbor] = temp_g_score + guess_distance(neighbor.get_position(), end.get_position())  # 更新总代价

                # 如果邻居不在待探索队列中
                if neighbor not in open_set_hash:
                    count += 1                         # 计数器+1
                    open_set.put((f_score[neighbor], count, neighbor))  # 加入优先队列
                    open_set_hash.add(neighbor)        # 加入集合
                    neighbor.make_open()               # 标记为绿色（待探索）

        draw(grid)                    # 实时更新画面

        # 将当前节点标记为红色（已探索），起点保持橙色
        if current != start:
            current.make_closed()

    # 如果循环结束还没找到路径，说明没有可行路径
    return False


def make_grid():
    """
    创建网格：生成一个 ROWS x ROWS 的二维列表，每个元素是一个 Node 对象
    """
    grid = []

    for i in range(ROWS):
        grid.append([])           # 每行是一个新列表
        for j in range(ROWS):
            node = Node.Node(i, j)  # 创建节点，传入行和列
            grid[i].append(node)   # 添加到当前行

    return grid


def draw_grid():
    """
    绘制网格线：在窗口上绘制灰色的横线和竖线
    """
    # 绘制横线
    for i in range(ROWS + 1):
        pygame.draw.line(WINDOW, colors.GREY, (0, i * GAP), (SIZE, i * GAP))

    # 绘制竖线
    for j in range(ROWS + 1):
        pygame.draw.line(WINDOW, colors.GREY, (j * GAP, 0), (j * GAP, SIZE))


def draw_node(node):
    """
    绘制单个节点：根据节点的颜色绘制一个矩形
    :param node: 要绘制的节点对象
    """
    pygame.draw.rect(WINDOW, node.color, (node.x, node.y, GAP, GAP))


def draw(grid):
    """
    绘制整个画面：先填充背景，然后绘制所有节点，最后绘制网格线
    :param grid: 整个网格
    """
    WINDOW.fill(colors.WHITE)       # 清空窗口，填充白色背景

    # 遍历所有节点并绘制
    for row in grid:
        for node in row:
            draw_node(node)

    draw_grid()                     # 绘制网格线
    pygame.display.update()         # 更新显示


def get_clicked_position(position):
    """
    将鼠标点击的像素坐标转换为网格坐标
    :param position: 鼠标位置 (y, x)，来自pygame.mouse.get_pos()
    :return: (row, column) 网格坐标
    """
    y, x = position

    row = y // GAP      # 像素y坐标 / 格子大小 = 行号
    column = x // GAP   # 像素x坐标 / 格子大小 = 列号

    return row, column


def draw_on_position(mouse_position, grid):
    """
    根据鼠标位置绘制节点：依次设置起点、终点、障碍物
    :param mouse_position: 鼠标位置
    :param grid: 整个网格
    """
    global start, end  # 使用全局变量

    row, column = get_clicked_position(mouse_position)

    # 检查是否超出边界
    if validator.is_position_out_of_bounds(row, column):
        return

    node = grid[row][column]

    # 逻辑：先设置起点，再设置终点，之后都是障碍物
    if start is None and node != end:      # 如果起点未设置，且点击的不是终点
        start = node
        start.make_start()                 # 标记为橙色起点
    elif end is None and node != start:    # 如果终点未设置，且点击的不是起点
        end = node
        end.make_end()                     # 标记为青色终点
    elif node != end and node != start:    # 否则标记为黑色障碍物
        node.make_barrier()


def reset_on_position(mouse_position, grid):
    """
    右键点击清除节点：将节点恢复为空白，并更新起点/终点状态
    :param mouse_position: 鼠标位置
    :param grid: 整个网格
    """
    global start, end

    row, column = get_clicked_position(mouse_position)
    if validator.is_position_out_of_bounds(row, column):
        return

    node = grid[row][column]

    # 如果已经是空白，不需要处理
    if node.is_empty():
        return

    # 如果清除的是起点或终点，需要更新全局变量
    if node == start:
        start = None
    elif node == end:
        end = None

    # 清除节点（恢复为白色）
    node.clear()


def update_neighbors_for_all(grid):
    """
    更新所有节点的邻居列表：在算法开始前调用，确保每个节点知道自己的相邻节点
    :param grid: 整个网格
    """
    for row in grid:
        for node in row:
            node.update_neighbors(grid)


def clear():
    """
    清空整个网格：重置起点、终点，并生成新的空白网格
    :return: 新创建的空白网格
    """
    global start, end

    start = None   # 重置起点
    end = None     # 重置终点

    return make_grid()  # 创建新网格


def get_start():
    """获取当前起点"""
    return start


def get_end():
    """获取当前终点"""
    return end

