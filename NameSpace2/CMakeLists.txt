cmake_minimum_required(VERSION 3.13)
project(NameSpace2)

set(CMAKE_CXX_STANDARD 14)

add_executable(NameSpace2 main.cpp Animals.cpp Animals.h Cat.cpp Cat.h)