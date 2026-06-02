cmake_minimum_required(VERSION 3.28.3)
project(CLIB_WriteQueForThreadsAt_ClientOutputReceive VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ClientOutputReceive STATIC
        include/CLIB_WriteEnableForThreadsAt_ClientOutputReceive.h
        src/CLIB_WriteEnableForThreadsAt_ClientOutputReceive.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive_Framework.h
        src/WriteEnableForThreadsAt_ClientOutputReceive_Framework.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive_Global.h
        src/WriteEnableForThreadsAt_ClientOutputReceive_Global.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive.h
        src/WriteEnableForThreadsAt_ClientOutputReceive.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive_Control.h
        src/WriteEnableForThreadsAt_ClientOutputReceive_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
