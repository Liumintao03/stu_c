cmake_minimum_required(VERSION 3.28)
project(Clion_stu_c C)

set(CMAKE_C_STANDARD 11)

#gcc main.c-o Clion_stu_c
add_executable(Clion_stu_c main.c
        Rlc/Rlc_fun.c
        Rlc/main.c
        Rlc/Rlc_fun.h
        Rlc/Rlc_fun.h)
