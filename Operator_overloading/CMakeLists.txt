cmake_minimum_required(VERSION 3.15)
project(Operator_overloading)

set(CMAKE_CXX_STANDARD 14)
include_directories("src")

add_executable(Operator_overloading main.cpp src/Mystring.cpp src/Mystring.h)