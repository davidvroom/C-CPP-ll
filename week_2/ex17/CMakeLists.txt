cmake_minimum_required(VERSION 3.8)
project(ex17)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih test.cc showexcepts/asathrowlist.cc
        showexcepts/showexcepts.h showexcepts/showexcepts.ih
        showexcepts/showexcepts1.cc showexcepts/asathrowlist.cc
        showexcepts/asNoexcept.cc)

add_executable(ex17 ${SOURCE_FILES})

