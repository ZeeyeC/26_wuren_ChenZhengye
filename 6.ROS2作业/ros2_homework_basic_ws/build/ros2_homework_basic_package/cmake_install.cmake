# Install script for directory: /home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/src/ros2_homework_basic_package

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/install/ros2_homework_basic_package")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package" TYPE EXECUTABLE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/bazi")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ros2_homework_basic_package/bazi")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/CMakeFiles/bazi.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/" TYPE DIRECTORY FILES
    "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/src/ros2_homework_basic_package/launch"
    "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/src/ros2_homework_basic_package/config"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ros2_homework_basic_package")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ros2_homework_basic_package")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/environment" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/environment" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_index/share/ament_index/resource_index/packages/ros2_homework_basic_package")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package/cmake" TYPE FILE FILES
    "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_core/ros2_homework_basic_packageConfig.cmake"
    "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/ament_cmake_core/ros2_homework_basic_packageConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros2_homework_basic_package" TYPE FILE FILES "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/src/ros2_homework_basic_package/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/c/Formax_wuren_shixi/26_wuren_ChenZhengye/6.ROS2作业/ros2_homework_basic_ws/build/ros2_homework_basic_package/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
