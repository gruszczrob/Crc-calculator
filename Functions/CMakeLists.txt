cmake_minimum_required(VERSION 3.12)

project(Functions)

add_library(Functions STATIC Functions.cpp)

target_include_directories(Functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})