cmake_minimum_required(VERSION 3.13)
project(nestedTemplateClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(nestedTemplateClass main.cpp ring.cpp ring.h ring2.h ring3.cpp ring3.h)