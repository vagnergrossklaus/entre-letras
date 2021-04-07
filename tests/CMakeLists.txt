cmake_minimum_required(VERSION 3.18)

project(tests LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${PROJECT_NAME} 
    entreletrastest.cpp
)

add_test(${PROJECT_NAME} ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE gtest entre-letras)