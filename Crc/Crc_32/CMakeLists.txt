cmake_minimum_required(VERSION 3.12)

project(Crc_32)

add_library(Crc_32 STATIC Crc_32.cpp "Crc_32.h")

target_link_libraries(Crc_32 PRIVATE Functions)

target_include_directories(Crc_32 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
