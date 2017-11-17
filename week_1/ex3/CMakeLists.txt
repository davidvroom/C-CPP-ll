cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih show.cc matrix/destructor.cc matrix/identity.cc matrix/matrix.h
        matrix/matrix.ih matrix/matrix1.cc matrix/matrix2.cc matrix/matrix3.cc matrix/matrix4.cc
        matrix/operatorassign1.cc matrix/operatorassign2.cc matrix/swap.cc
        matrix/tr.cc matrix/transpose.cc matrix/transpose2.cc)
add_executable(ex3 ${SOURCE_FILES})