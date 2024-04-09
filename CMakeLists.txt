cmake_minimum_required(VERSION 3.27)
project(Sand)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

add_executable(Sand
        main.cpp
        defs.h
        sand_grain.h
        sand_grain.cpp
        sand_tank.h
        sand_tank.cpp
        color_picker.h
        color_picker.cpp
        color_cell.h
        color_cell.cpp
        main_window.h
        main_window.cpp)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(Sand PRIVATE raylib)