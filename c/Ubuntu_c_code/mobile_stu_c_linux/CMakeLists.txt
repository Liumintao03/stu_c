cmake_minimum_required(VERSION 3.16)
project(mobile_stu_c_linux C)

set(CMAKE_C_STANDARD 11)

add_executable(mobile_stu_c_linux main.c)
add_subdirectory(01fileIO)

