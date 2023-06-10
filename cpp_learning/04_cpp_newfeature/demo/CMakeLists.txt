cmake_minimum_required(VERSION 3.0)
project(example)

# 查找OpenCV库
find_package(OpenCV REQUIRED)

# 将OpenCV库的头文件路径添加到include路径中
include_directories(${OpenCV_INCLUDE_DIRS})

# 定义可执行文件的源文件列表
set(SOURCES before_demo.cpp)

# 生成可执行文件example
add_executable(example ${SOURCES})

# 链接OpenCV库
target_link_libraries(example ${OpenCV_LIBS})

