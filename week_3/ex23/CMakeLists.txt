cmake_minimum_required(VERSION 3.8)
project(ex23)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih subtraction/subtraction.h binops/binops.h
        addition/addition.h operations/operations.h addition/addition.ih
        binops/binopsadd.cc binops/binops.ih addition/operatoraddis1.cc
        addition/operatoraddis2.cc addition/operatoradd1.cc addition/operatoradd2.cc
        binops/binopssub.cc subtraction/operatorsub1.cc subtraction/operatorsub2.cc
        subtraction/operatorsubis1.cc subtraction/operatorsubis2.cc
        subtraction/subtraction.ih operations/operations.cc operations/operations.ih)
add_executable(ex23 ${SOURCE_FILES})