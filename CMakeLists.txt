cmake_minimum_required(VERSION 3.22.1)
project(Xray)

add_subdirectory(src)

add_executable(xray main.cpp)
target_link_libraries(xray core)
include_directories(src)