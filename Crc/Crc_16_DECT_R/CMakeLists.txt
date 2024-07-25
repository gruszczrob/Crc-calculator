cmake_minimum_required(VERSION 3.12)

project(Crc_16_DECT_R)

add_library(Crc_16_DECT_R STATIC Crc_16_DECT_R.cpp)

target_link_libraries(Crc_16_DECT_R PRIVATE Functions)

target_include_directories(Crc_16_DECT_R PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
