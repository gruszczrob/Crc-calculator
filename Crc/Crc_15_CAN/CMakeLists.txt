cmake_minimum_required(VERSION 3.12)

project(Crc_15_CAN)

add_library(Crc_15_CAN STATIC Crc_15_CAN.cpp)

target_link_libraries(Crc_15_CAN PRIVATE Functions)

target_include_directories(Crc_15_CAN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
