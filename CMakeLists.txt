cmake_minimum_required(VERSION 3.10)
project(3207_Lab_Introduction_F24_ C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-Wall -Werror -Wpedantic)

add_executable(3207_Lab_Introduction_F24_
    print_random.c
        random.c
        random.h)
