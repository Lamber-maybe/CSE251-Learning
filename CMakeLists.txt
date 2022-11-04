cmake_minimum_required(VERSION 3.23)
project(hello C)

set(CMAKE_C_STANDARD 99)

add_executable(hello main.c)
add_executable(rlc exercise/rlc.c)
add_executable(rlc2 exercise/rlc2.c)
add_executable(myhello exercise/step1/myhello.c)
add_executable(step2 exercise/step2/step2.c)