cmake_minimum_required(VERSION 3.8)
project(ex37b)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp vectordata/vectordata.h)
add_executable(ex37b ${SOURCE_FILES})