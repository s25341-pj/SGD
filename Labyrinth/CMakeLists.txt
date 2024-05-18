cmake_minimum_required(VERSION 3.24)
project(Labyrinth)

set(CMAKE_CXX_STANDARD 17)

set(FINAL_PATH "${CMAKE_BINARY_DIR}/LIBS")

set(SDL2LIB_INCLUDE "${FINAL_PATH}/SDL2-2.30.1/include")
set(SDL2LIB_LIB "${FINAL_PATH}/SDL2-2.30.1/lib/x64")
#set(SDL2IMAGE_LIB_DIR "${FINAL_PATH}/SDL2_image-2.8.2")

include_directories("${FINAL_PATH}/SDL2-2.30.1/include")
add_executable(${PROJECT_NAME} main.cpp
        walls.h
        goals.h
)
#include_directories(${SDL2IMAGE_LIB_DIR})
#file(COPY "${SDL2IMAGE_LIB_DIR}/lib/SDL2_image.dll" DESTINATION ${CMAKE_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} ${SDL2LIB_LIB}/SDL2main.lib)
target_link_libraries(${PROJECT_NAME} ${SDL2LIB_LIB}/SDL2.lib)
#target_link_libraries(${PROJECT_NAME} "${SDL2IMAGE_LIB_DIR}/lib/SDL2_image.dll")