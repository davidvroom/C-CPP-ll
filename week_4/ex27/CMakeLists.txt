cmake_minimum_required(VERSION 3.8)
project(ex27)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc ofdstreambuf/ofdstreambuf.h ofdstreambuf/ofdstreambuf1.cc
        ofdstreambuf/ofdstreambuf.ih ofdstreambuf/ofdstreambuf2.cc
        ofdstreambuf/open.cc ofdstreambuf/close.cc
        ofdstreambuf/destructor.cc ofdstreambuf/overflow.cc
        ofdstreambuf/sync.cc)
add_executable(ex27 ${SOURCE_FILES})