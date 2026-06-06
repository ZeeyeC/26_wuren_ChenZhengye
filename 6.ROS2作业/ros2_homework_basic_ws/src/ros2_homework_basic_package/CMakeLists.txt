cmake_minimum_required(VERSION 3.8)
project(ros2_homework_basic_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 找依赖和头文件
find_package(ament_cmake REQUIRED) #用来链接ros2
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

# 编译可执行文件
add_executable(bazi src/bazi.cpp)
ament_target_dependencies(bazi
  rclcpp
  geometry_msgs
)

# 安装可执行文件和配置文件到share目录下
install(TARGETS
  bazi
  DESTINATION lib/${PROJECT_NAME}
)

# 安装launch文件到share目录下 share是运行的空间 src只是存放代码
install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}/
)

# 测试
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

#没有这个的cmake没有办法实现ros2
ament_package()
