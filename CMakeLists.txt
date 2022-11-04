cmake_minimum_required(VERSION 3.23)
project(hello C)

set(CMAKE_C_STANDARD 99)

add_executable(hello main.c)
add_executable(rlc rlc.c)