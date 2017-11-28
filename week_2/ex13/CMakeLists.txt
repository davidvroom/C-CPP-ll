cmake_minimum_required(VERSION 3.8)
project(ex13)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main1.cc main.ih matrix/destructor.cc matrix/at.cc
        matrix/identity.cc matrix/matrix.h show.cc
        matrix/matrix.ih matrix/matrix1.cc matrix/matrix2.cc matrix/matrix3.cc
        matrix/matrix4.cc matrix/operatorassign1.cc matrix/operatorassign2.cc
        matrix/swap.cc matrix/tr.cc matrix/transpose.cc matrix/transpose2.cc)

add_executable(ex13 ${SOURCE_FILES})