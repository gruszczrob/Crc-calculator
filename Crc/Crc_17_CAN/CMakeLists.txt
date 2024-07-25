cmake_minimum_required(VERSION 3.12)

project(Crc_17_CAN)

add_library(Crc_17_CAN STATIC Crc_17_CAN.cpp)

target_link_libraries(Crc_17_CAN PRIVATE Functions)

target_include_directories(Crc_17_CAN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
