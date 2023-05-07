cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(homework3-11-3)
add_library(LeaverDynamicLibrary SHARED LeaverDynamicLib.h LeaverDynamicLib.cpp)
add_executable(DynamicLibraryClientExe DynamicLibraryClient.cpp)
target_link_libraries(DynamicLibraryClientExe LeaverDynamicLibrary)