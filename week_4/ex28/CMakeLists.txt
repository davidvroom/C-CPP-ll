cmake_minimum_required(VERSION 3.8)
project(ex28)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cc ofdstream/ofdstream.cc ofdstream/ofdstream.h
        ofdstream/ofdstream.ih ifdstream/ifdstream.cc ifdstream/ifdstream.h
        ifdstream/ifdstream.ih

        ifdstreambuf/ifdstreambuf.h ifdstreambuf/destructor.cc
        ifdstreambuf/close.cc ifdstreambuf/ifdstreambuf.h ifdstreambuf/ifdstreambuf.ih
        ifdstreambuf/ifdstreambuf1.cc ifdstreambuf/ifdstreambuf2.cc ifdstreambuf/open.cc
        ifdstreambuf/underflow.cc ifdstreambuf/xsgetn.cc

        ofdstreambuf/ofdstreambuf.h ofdstreambuf/ofdstreambuf1.cc
        ofdstreambuf/ofdstreambuf.ih ofdstreambuf/ofdstreambuf2.cc
        ofdstreambuf/open.cc ofdstreambuf/close.cc
        ofdstreambuf/destructor.cc ofdstreambuf/overflow.cc
        ofdstreambuf/sync.cc)
add_executable(ex28 ${SOURCE_FILES})