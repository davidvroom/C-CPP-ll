cmake_minimum_required(VERSION 3.8)
project(ex1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih factory.cc demo/demo.h)
add_executable(ex1 ${SOURCE_FILES})