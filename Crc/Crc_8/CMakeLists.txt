cmake_minimum_required(VERSION 3.12)

project(Crc_8)

add_library(Crc_8 STATIC Crc_8.cpp "Crc_8.h")

target_link_libraries(Crc_8 PRIVATE Functions)

target_include_directories(Crc_8 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
