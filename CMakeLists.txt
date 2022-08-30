cmake_minimum_required(VERSION 3.23)
project(advent_cpp_2020)

set(CMAKE_CXX_STANDARD 17)

add_executable(advent_cpp_2020 main.cpp utils/Utilities.cpp utils/Utilities.h src/Day01.cpp src/Day01.h src/solutions.h src/Day02.cpp src/Day02.h)
