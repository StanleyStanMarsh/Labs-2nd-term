cmake_minimum_required(VERSION 3.23)
project(lab1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab1
        main.cpp
        myRect.cpp
        myRect.h
        myString.cpp
        myString.h funcs.cpp funcs.h Bochka.cpp Bochka.h)
