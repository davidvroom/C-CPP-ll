cmake_minimum_required(VERSION 3.8)
project(ex12)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc maxfour/maxfour.cc maxfour/destructor.cc
        maxfour/maxfour.ih main.ih)
add_executable(ex12 ${SOURCE_FILES})