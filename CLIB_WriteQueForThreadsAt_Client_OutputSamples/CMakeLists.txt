cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_Client_OutputSamples VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_Client_OutputSamples STATIC
        src/CLIB_WriteEnableForThreadsAt_Client_OutputSamples.cpp
        src/WriteEnableForThreadsAt_Client_OutputSamples__Framework.cpp
        src/WriteEnableForThreadsAt_Client_OutputSamples__Global.cpp
        src/WriteEnableForThreadsAt_Client_OutputSamples__App.cpp
        src/WriteEnableForThreadsAt_Client_OutputSamples__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
