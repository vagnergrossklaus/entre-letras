cmake_minimum_required(VERSION 3.18)

project(entre-letras-bin LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(entre-letras-bin
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE entre-letras)