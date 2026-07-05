cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ClientOutputReceive VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ClientOutputReceive STATIC
        include/CLIB_WriteEnableForThreadsAt_ClientOutputReceive.h
        src/CLIB_WriteEnableForThreadsAt_ClientOutputReceive.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive__Framework.h
        src/WriteEnableForThreadsAt_ClientOutputReceive__Framework.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive__Global.h
        src/WriteEnableForThreadsAt_ClientOutputReceive__Global.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive__App.h
        src/WriteEnableForThreadsAt_ClientOutputReceive__App.cpp
        include/WriteEnableForThreadsAt_ClientOutputReceive__Control.h
        src/WriteEnableForThreadsAt_ClientOutputReceive__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
