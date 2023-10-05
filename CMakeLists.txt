cmake_minimum_required(VERSION 3.24)
project(COP3530Project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(COP3530Project1 src/main.cpp src/main.cpp test-unit/test.cpp build/AVL.h build/AVL.cpp)
