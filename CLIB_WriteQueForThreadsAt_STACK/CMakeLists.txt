cmake_minimum_required(VERSION 4.2)
project(CLIB_WriteQueForThreadsAt_STACK)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_STACK STATIC
        include/CLIB_WriteEnableForThreadsAt_STACK.h
        src/CLIB_WriteEnableForThreadsAt_STACK.cpp
        include/WriteEnableForThreadsAt_STACK_Framework.h
        src/WriteEnableForThreadsAt_STACK_Framework.cpp
        include/WriteEnableForThreadsAt_STACK_Global.h
        src/WriteEnableForThreadsAt_STACK_Global.cpp
        include/WriteEnableForThreadsAt_STACK.h
        src/WriteEnableForThreadsAt_STACK.cpp
        include/WriteEnableForThreadsAt_STACK_Control.h
        src/WriteEnableForThreadsAt_STACK_Control.cpp
)
