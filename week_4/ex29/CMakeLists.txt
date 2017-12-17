cmake_minimum_required(VERSION 3.8)
project(ex29)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc test/test.cc fork/destructor.cc fork/fork.cc
        fork/fork.h fork/fork.ih fork/waitforchild.cc derived/childprocess.cc
        derived/derived.h derived/derived.ih derived/derived1.cc
        derived/parentprocess.cc derived/destructor.cc)
add_executable(ex29 ${SOURCE_FILES})