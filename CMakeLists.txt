cmake_minimum_required(VERSION 3.15)

project(sanitizers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Sanitzers are only implemented in Clang
set(CMAKE_CXX_COMPILER "clang++")
message(STATUS "!!! Forcing build with C++ compiler: ${CMAKE_CXX_COMPILER}")

# Sanitizers are only included in the debug build (usage: https://github.com/google/sanitizers/wiki)
set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)
message(STATUS "!!! Forcing compilation with build type: ${CMAKE_BUILD_TYPE}")

add_subdirectory(address_sanitizer)
add_subdirectory(memory)
add_subdirectory(thread)
add_subdirectory(undefined_behavior)
