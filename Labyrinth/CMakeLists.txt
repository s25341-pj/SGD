cmake_minimum_required(VERSION 3.24)
project(Labyrinth)

set(CMAKE_CXX_STANDARD 17)

set(SDL2LIB_INCLUDE "C:/Users/dfeister/Documents/cpplib/SDL2-2.30.1/include")
set(SDL2LIB_LIB "C:/Users/dfeister/Documents/cpplib/SDL2-2.30.1/lib/x64")

include_directories("C:/Users/dfeister/Documents/cpplib/SDL2-2.30.1/include")
add_executable(${PROJECT_NAME} main.cpp
        walls.h
        goals.h
)
target_link_libraries(${PROJECT_NAME} ${SDL2LIB_LIB}/SDL2main.lib)
target_link_libraries(${PROJECT_NAME} ${SDL2LIB_LIB}/SDL2.lib)