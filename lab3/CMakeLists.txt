cmake_minimum_required(VERSION 3.23)
project(lab3)

set(CMAKE_CXX_STANDARD 17)

#add_compile_options(-Winvalid-pch)
#add_compile_options(-H)

add_executable(lab3 main.cpp myString.h myString.cpp Point.cpp Point.h BD.cpp BD.h Pair.cpp Pair.h)

target_precompile_headers(lab3 PRIVATE myString.h Point.h BD.h)