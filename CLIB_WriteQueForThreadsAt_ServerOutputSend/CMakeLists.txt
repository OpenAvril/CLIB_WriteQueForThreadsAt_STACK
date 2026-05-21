cmake_minimum_required(VERSION 4.2)
project(CLIB_WriteQueForThreadsAt_ServerOutputSend)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ServerOutputSend STATIC
        include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend_Framework.h
        src/WriteEnableForThreadsAt_ServerOutputSend_Framework.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend_Global.h
        src/WriteEnableForThreadsAt_ServerOutputSend_Global.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend.h
        src/WriteEnableForThreadsAt_ServerOutputSend.cpp
        include/WriteEnableForThreadsAt_ServerOutputSend_Control.h
        src/WriteEnableForThreadsAt_ServerOutputSend_Control.cpp
)
