cmake_minimum_required(VERSION 3.17)
project(TP1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TP1
        ccount.h
        tableaux.c)
