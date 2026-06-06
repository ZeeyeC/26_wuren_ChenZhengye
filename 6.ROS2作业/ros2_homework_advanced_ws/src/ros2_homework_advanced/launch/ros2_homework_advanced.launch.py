# 导包
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    
    # 1. 启动可视化节点
    map_visualizer_node = Node(
        package='ros2_homework_advanced',
        executable='map_visualizer_node', # 可执行文件名
        name='map_visualizer', # 节点名（运行时显示的名称，也是在RViz中显示的名称）
        output='screen', # 特指日志输出到终端屏幕，不设制的话就不会在终端出现日志
    )

    # 2. 播放 bag 文件（包含地图数据）
    bag_file_path = '/home/c/Formax_wuren_shixi/ros2_learning-main/ros2_advanced/ros2_homework_advanced_ws/map_to_visualize.bag'

    play_bag = ExecuteProcess(
        cmd=['ros2', 'bag', 'play', bag_file_path],
        output='screen',
    )

    # 3. 返回启动描述
    return LaunchDescription([
        map_visualizer_node,
        play_bag,
    ])