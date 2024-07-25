cmake_minimum_required(VERSION 3.12)

project(Crc_21_CAN)

add_library(Crc_21_CAN STATIC Crc_21_CAN.cpp)

target_link_libraries(Crc_21_CAN PRIVATE Functions)

target_include_directories(Crc_21_CAN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
