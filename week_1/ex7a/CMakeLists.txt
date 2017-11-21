cmake_minimum_required(VERSION 3.8)
project(ex62)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc main.ih
        strings/add.cc strings/destroy.cc
        strings/destructor.cc strings/enlarged.cc
        strings/rawpointers.cc strings/reserve.cc
        strings/resize.cc strings/safeat.cc
        strings/storagearea.cc strings/strings.h
        strings/strings.ih strings/strings1.cc
        strings/strings2.cc strings/strings3.cc
        strings/copyconstructor.cc strings/swap.cc
        strings/operatorassign.cc strings/operatorassignmove.cc
        strings/moveconstructor.cc strings/operatorequalto.cc
        strings/operatornotequalto.cc)
add_executable(ex62 ${SOURCE_FILES})