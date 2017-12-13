cmake_minimum_required(VERSION 3.8)
project(ex25)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc bistreambuffer/bistreambuffer.h bistreambuffer/bistreambuffer.ih
        bistreambuffer/bistreambuffer1.cc bistream/bistream.h bistream/bistream.ih
        bistream/bistream1.cc bistream/operatorinsert.cc bistreambuffer/overflow.cc)
add_executable(ex25 ${SOURCE_FILES})