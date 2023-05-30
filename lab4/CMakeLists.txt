cmake_minimum_required(VERSION 3.24)
project(lab4)

set(CMAKE_CXX_STANDARD 17)


#message("${VLD_H}")
#message("${VLD}")
add_executable(lab4 main.cpp Point.h Point.cpp Circle.cpp Circle.h Node.cpp Node.h List.cpp List.h)

INCLUDE_DIRECTORIES("C:/Program Files (x86)/Visual Leak Detector/include")
TARGET_LINK_LIBRARIES(lab4 "C:/Program Files (x86)/Visual Leak Detector/lib/Win32/vld.lib")
#target_precompile_headers(lab4 PRIVATE Point.h Circle.h Node.h)