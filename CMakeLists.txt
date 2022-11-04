cmake_minimum_required(VERSION 3.23)
project(hello C)

set(CMAKE_C_STANDARD 99)

add_executable(hello main.c)
add_executable(myhello exercise/step1/myhello.c)
add_executable(step2 exercise/step2/step2.c)
add_executable(rlc exercise/step2/rlc.c)
add_executable(rlc2 exercise/step3/rlc2.c)
add_executable(tax exercise/step3/tax.c)
add_executable(looper exercise/step4/looper.c)
add_executable(factorial exercise/step4/factorial.c)
add_executable(sine exercise/step4/sine.c)