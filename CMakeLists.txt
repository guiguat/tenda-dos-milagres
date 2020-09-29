cmake_minimum_required(VERSION 3.17)
project(bencao C)

set(CMAKE_C_STANDARD 99)

add_executable(bencao main.c tenda.h tenda.c)