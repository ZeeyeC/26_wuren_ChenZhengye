# 8字形运动启动文件

from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

#入口函数
def generate_launch_description():
    # 从YAML文件加载参数
    param_file = PathJoinSubstitution([ #把表中的元素用/连接起来，得到完整的路径
        FindPackageShare('ros2_homework_basic_package'),
        'config',
        'turtle_params.yaml'
    ])
    
    # 1. 启动 turtlesim 仿真节点
    turtlesim_node = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='turtlesim',
        output='screen',
        parameters=[
            # 可以在这里设置 turtlesim 的初始参数（背景颜色等，不备注就是默认的蓝色）
            #{'background_r': 255},
            #{'background_g': 255},
            #{'background_b': 255}
        ]
    )
    
    # 2. 启动8字形运动控制器节点
    turtle_figure_eight_node = Node(
        package='ros2_homework_basic_package',
        executable='bazi',
        name='bazi',
        output='screen',
        parameters=[param_file]  # 加载参数配置文件 前面param_file = PathJoinSubstitution
    )
    
    # 返回启动描述
    return LaunchDescription([
        turtlesim_node,
        turtle_figure_eight_node
    ])
