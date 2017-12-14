cmake_minimum_required(VERSION 3.8)
project(ex26)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc ifdstreambuf/ifdstreambuf.h ifdstreambuf/destructor.cc
        ifdstreambuf/close.cc ifdstreambuf/ifdstreambuf.h ifdstreambuf/ifdstreambuf.ih
        ifdstreambuf/ifdstreambuf1.cc ifdstreambuf/ifdstreambuf2.cc ifdstreambuf/open.cc
        ifdstreambuf/underflow.cc ifdstreambuf/xsgetn.cc)
add_executable(ex26 ${SOURCE_FILES})