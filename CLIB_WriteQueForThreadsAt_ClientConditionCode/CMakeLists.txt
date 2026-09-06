cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_ClientConditionCode VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_ClientConditionCode STATIC
        src/CLIB_WriteEnableForThreadsAt_ClientConditionCode.cpp
        src/WriteEnableForThreadsAt_ClientConditionCode__Framework.cpp
        src/WriteEnableForThreadsAt_ClientConditionCode__Global.cpp
        src/WriteEnableForThreadsAt_ClientConditionCode__App.cpp
        src/WriteEnableForThreadsAt_ClientConditionCode__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
