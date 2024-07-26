cmake_minimum_required(VERSION 3.12)

project(Crc_64_ECMA)

add_library(Crc_64_ECMA STATIC Crc_64_ECMA.cpp "Crc_64_ECMA.h")

target_link_libraries(Crc_64_ECMA PRIVATE Functions)

target_include_directories(Crc_64_ECMA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
