cmake_minimum_required(VERSION 3.8)
project(ex16)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih demo/demo.cc demo/demo.h demo/demo.ih
        demo/destructor.cc function1.cc function2.cc
        function3.cc)

add_executable(ex16 ${SOURCE_FILES})