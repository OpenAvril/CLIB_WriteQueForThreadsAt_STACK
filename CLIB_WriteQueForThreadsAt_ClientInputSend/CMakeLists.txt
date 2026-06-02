cmake_minimum_required(VERSION 3.28.3)
project(CLIB_WriteQueForThreadsAt_ClientInputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_WriteQueForThreadsAt_ClientInputSend STATIC
        include/CLIB_WriteEnableForThreadsAt_ClientInputSend.h
        src/CLIB_WriteEnableForThreadsAt_ClientInputSend.cpp
        include/WriteEnableForThreadsAt_ClientInputSend_Framework.h
        src/WriteEnableForThreadsAt_ClientInputSend_Framework.cpp
        include/WriteEnableForThreadsAt_ClientInputSend_Global.h
        src/WriteEnableForThreadsAt_ClientInputSend_Global.cpp
        include/WriteEnableForThreadsAt_ClientInputSend.h
        src/WriteEnableForThreadsAt_ClientInputSend.cpp
        include/WriteEnableForThreadsAt_ClientInputSend_Control.h
        src/WriteEnableForThreadsAt_ClientInputSend_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)