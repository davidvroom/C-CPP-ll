cmake_minimum_required(VERSION 3.8)
project(ex28)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc ofdstream/ofdstream.cc ofdstream/ofdstream.h
        ofdstream/ofdstream.ih ifdstream/ifdstream.cc ifdstream/ifdstream.h
        ifdstream/ifdstream.ih)
add_executable(ex28 ${SOURCE_FILES})