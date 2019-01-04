cmake_minimum_required(VERSION 3.13)
project(Particle_cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")

add_executable(Particle_cpp main.cpp Screen.cpp Screen.h Particle.cpp Particle.h Swarm.cpp Swarm.h)
# From https://stackoverflow.com/questions/44998233/add-external-c-libraries-to-a-clion-project
include_directories("/usr/include/SDL2")
link_directories("/usr/lib/x86_64-linux-gnu/libSDL2.so")
target_link_libraries(Particle_cpp "/usr/lib/x86_64-linux-gnu/libSDL2.so")
