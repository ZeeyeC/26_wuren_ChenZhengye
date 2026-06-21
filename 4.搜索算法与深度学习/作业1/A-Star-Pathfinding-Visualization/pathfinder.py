import pygame #导包
from utils import grid_util #从网格工具包导入grid_util模块


def main():
    grid = grid_util.make_grid() #创建空白网格

    is_running = True #窗口运行状态
    while is_running:#循环窗口运行
        grid_util.draw(grid)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                is_running = False

            # LMB
            if pygame.mouse.get_pressed()[0]:
                mouse_position = pygame.mouse.get_pos()
                grid_util.draw_on_position(mouse_position, grid)

            # RMB
            elif pygame.mouse.get_pressed()[2]:
                mouse_position = pygame.mouse.get_pos()
                grid_util.reset_on_position(mouse_position, grid)

            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_RETURN and grid_util.get_start() and grid_util.get_end():
                    grid_util.update_neighbors_for_all(grid)
                    grid_util.a_star_algorithm(grid)

                if event.key == pygame.K_c:
                    grid = grid_util.clear()

    pygame.quit()


main()
