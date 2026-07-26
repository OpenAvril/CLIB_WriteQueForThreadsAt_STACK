cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_OutputGameInstanaceData VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_OutputGameInstanaceData STATIC
        src/CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData.cpp
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Framework.cpp
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Global.cpp
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__App.cpp
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
