cmake_minimum_required(VERSION 3.28)
project(Clion_stu_c C)

set(CMAKE_C_STANDARD 11)

#gcc main.c-o Clion_stu_c
add_executable(Clion_stu_c main.c)


add_subdirectory(Rlc)
add_subdirectory(struct_data)

add_subdirectory(struct_data_func)