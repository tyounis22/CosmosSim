cmake_minimum_required(VERSION 3.31)
project(CosmosSim)

set(CMAKE_CXX_STANDARD 20)

# 1. Look for the Raylib library (installed via Brew)
find_package(raylib REQUIRED)

# 2. Define our executable and source files
add_executable(CosmosSim main.cpp Particle.cpp Particle.h Vec3.cpp Vec3.h)

# 3. Link Raylib to our executable
target_link_libraries(CosmosSim raylib)