cmake_minimum_required(VERSION 3.13)
project(dual_numbers_arithematic)
set(CMAKE_CXX_STANDARD 14)

include_directories("./")
set(SOURCE_FILES dualnumber.cxx)

add_executable(simple_example main.cpp ${SOURCE_FILES})
