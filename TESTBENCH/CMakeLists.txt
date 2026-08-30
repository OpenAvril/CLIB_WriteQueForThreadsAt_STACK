cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_STACK VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_WriteQueForThreadsAt_STACK/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_executable(TESTBENCH main.cpp)

target_link_libraries(TESTBENCH PRIVATE libCLIB_WriteQueForThreadsAt_STACK.a)