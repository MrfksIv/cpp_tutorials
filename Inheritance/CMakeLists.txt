cmake_minimum_required(VERSION 3.15)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)
include_directories("src")
add_executable(Inheritance main.cpp src/Account.cpp src/Account.h src/Savings_Account.cpp src/Savings_Account.h)