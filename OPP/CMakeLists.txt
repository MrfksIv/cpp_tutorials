cmake_minimum_required(VERSION 3.15)
project(OPP)

set(CMAKE_CXX_STANDARD 14)

include_directories("./Classes/Account")
include_directories("./Classes/ShallowAccount")
include_directories("./Classes/DeepAccount")


add_executable(OPP main.cpp Classes/Account/Account.h Classes/Account/Account.cpp Classes/ShallowAccount/ShallowAccount.cpp Classes/ShallowAccount/ShallowAccount.h Classes/DeepAccount/DeepAccount.cpp Classes/DeepAccount/DeepAccount.h)