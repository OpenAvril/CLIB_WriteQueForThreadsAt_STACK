cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ClientInputSend VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ClientInputSend STATIC
        include/CLIB_WriteEnableForThreadsAt_ClientInputSend.h
        src/CLIB_WriteEnableForThreadsAt_ClientInputSend.cpp
        include/WriteEnableForThreadsAt_ClientInputSend__Framework.h
        src/WriteEnableForThreadsAt_ClientInputSend__Framework.cpp
        include/WriteEnableForThreadsAt_ClientInputSend__Global.h
        src/WriteEnableForThreadsAt_ClientInputSend__Global.cpp
        include/WriteEnableForThreadsAt_ClientInputSend__App.h
        src/WriteEnableForThreadsAt_ClientInputSend__App.cpp
        include/WriteEnableForThreadsAt_ClientInputSend__Control.h
        src/WriteEnableForThreadsAt_ClientInputSend__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
