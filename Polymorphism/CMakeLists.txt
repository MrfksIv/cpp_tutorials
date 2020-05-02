cmake_minimum_required(VERSION 3.15)
project(Polymorphism)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_executable(Polymorphism main.cpp src/Account.cpp src/Account.h src/Checking.cpp src/Checking.h src/Savings.cpp src/Savings.h src/Shape.cpp src/Shape.h src/Circle.cpp src/Circle.h src/Printable.cpp src/Printable.h)