cmake_minimum_required(VERSION 3.8)
project(ex20)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih subtraction/subtraction.h binops/binops.h
        addition/addition.h operations/operations.h addition/addition.ih
        addition/operator1.cc addition/operator2.cc addition/operator3.cc
        addition/operator4.cc)
add_executable(ex20 ${SOURCE_FILES})