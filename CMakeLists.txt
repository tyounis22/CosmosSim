cmake_minimum_required(VERSION 3.31)
project(CosmosSim)

set(CMAKE_CXX_STANDARD 20)

add_executable(CosmosSim main.cpp
        Vector3.cpp
        Vector3.h
        Particle.cpp
        Particle.h)
