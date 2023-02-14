cmake_minimum_required(VERSION 3.10)
project(haoz_mutex)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -std=c++11 -pthread -g -march=native")

add_executable(mutex mutex.cpp)
add_executable(recursive_mutex recursive_mutex.cpp)

