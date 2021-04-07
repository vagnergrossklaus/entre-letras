cmake_minimum_required(VERSION 3.18)

project(entre-letras LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(app)
add_subdirectory(tests)

add_library(${PROJECT_NAME} SHARED
    src/entreletras.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)