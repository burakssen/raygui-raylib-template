cmake_minimum_required(VERSION 3.29)

project(raygui-raylib-template)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(vendor/raylib)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE src vendor/raylib/src vendor/raygui/src)

target_link_libraries(${PROJECT_NAME} raylib)