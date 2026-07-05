cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_CLIB_WriteQueForThreadAt_OutputGameInstanaceData VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_CLIB_WriteQueForThreadAt_OutputGameInstanaceData STATIC
        include/CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData.h
        src/CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData.cpp
        include/WriteEnableForThreadsAt_OutputGameInstanaceData__Framework.h
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Framework.cpp
        include/WriteEnableForThreadsAt_OutputGameInstanaceData__Global.h
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Global.cpp
        include/WriteEnableForThreadsAt_OutputGameInstanaceData__App.h
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__App.cpp
        include/WriteEnableForThreadsAt_OutputGameInstanaceData__Control.h
        src/WriteEnableForThreadsAt_OutputGameInstanaceData__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
