cmake_minimum_required(VERSION 3.8)
project(ex31)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc base/base.h c/c.h a/a.h main.ih)
add_executable(ex31 ${SOURCE_FILES})