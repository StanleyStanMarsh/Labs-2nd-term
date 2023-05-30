cmake_minimum_required(VERSION 3.23)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp myString.cpp myString.h Shape.cpp Shape.h Rect.cpp Rect.h Circle.cpp Circle.h Bin.cpp Bin.h Hex.cpp Hex.h Oct.cpp Oct.h MyByte.h MyByte.cpp)
