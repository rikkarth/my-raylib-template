cmake_minimum_required(VERSION 3.20)

get_filename_component(PROJECT_NAME_FROM_DIR ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME_FROM_DIR} VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
target_include_directories(${PROJECT_NAME} PRIVATE include)