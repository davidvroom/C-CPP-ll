cmake_minimum_required(VERSION 3.8)
project(ex44)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih vstring/vstring.cc vstring/vstring.h
        vstring/vstring.ih vstring/count.cc vstring/countchar.cc
        display.cc vowels.cc)
add_executable(ex44 ${SOURCE_FILES})