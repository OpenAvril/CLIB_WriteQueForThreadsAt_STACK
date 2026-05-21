cmake_minimum_required(VERSION 4.2)
project(CLIB_WriteQueForThreadsAt_ServerInputReceive)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ServerInputReceive STATIC
        include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h
        src/CLIB_WriteEnableForThreadsAt_ServerInputReceive.cpp
        include/WriteEnableForThreadsAt_ServerInputReceive_Framework.h
        src/WriteEnableForThreadsAt_ServerInputReceive_Framework.cpp
        include/WriteEnableForThreadsAt_ServerInputReceive_Global.h
        src/WriteEnableForThreadsAt_ServerInputReceive_Global.cpp
        include/WriteEnableForThreadsAt_ServerInputReceive.h
        src/WriteEnableForThreadsAt_ServerInputReceive.cpp
        include/WriteEnableForThreadsAt_ServerInputReceive_Control.h
        src/WriteEnableForThreadsAt_ServerInputReceive_Control.cpp
)
