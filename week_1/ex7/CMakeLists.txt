cmake_minimum_required(VERSION 3.8)
project(ex5)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih matrix/destructor.cc matrix/identity.cc matrix/matrix.h
        matrix/matrix.ih matrix/matrix1.cc matrix/matrix2.cc matrix/matrix3.cc
        matrix/matrix4.cc matrix/operatorassign1.cc matrix/operatorassign2.cc
        matrix/swap.cc matrix/tr.cc matrix/transpose.cc matrix/transpose2.cc
        matrix/add.cc matrix/operatoradd.cc matrix/operatoradd2.cc
        matrix/operatorcompadd1.cc matrix/operatorcompadd2.cc
        matrix/operatorinsert.cc matrix/operatorextract.cc matrix/functor1.cc
        matrix/extractrows.cc matrix/extractcols.cc matrix/functor2.cc
        matrix/functor3.cc matrix/operatorequalto.cc matrix/operatornotequalto.cc)
add_executable(ex5 ${SOURCE_FILES})