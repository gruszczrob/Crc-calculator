cmake_minimum_required (VERSION 3.12)

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (Crc_Cal)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(pybind11)
pybind11_add_module(Crc_Cal_Module module.cpp)

add_executable(Crc_Cal_App main.cpp)

add_subdirectory(Functions)
target_link_libraries(Crc_Cal_App PUBLIC Functions)
target_link_libraries(Crc_Cal_Module PUBLIC Functions)

add_subdirectory(Crc/Crc_8)
target_link_libraries(Crc_Cal_App PRIVATE Crc_8)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_8)

add_subdirectory(Crc/Crc_15_CAN)
target_link_libraries(Crc_Cal_App PRIVATE Crc_15_CAN)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_15_CAN)

add_subdirectory(Crc/Crc_16_DECT_R)
target_link_libraries(Crc_Cal_App PRIVATE Crc_16_DECT_R)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_16_DECT_R)

add_subdirectory(Crc/Crc_17_CAN)
target_link_libraries(Crc_Cal_App PRIVATE Crc_17_CAN)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_17_CAN)

add_subdirectory(Crc/Crc_21_CAN)
target_link_libraries(Crc_Cal_App PRIVATE Crc_21_CAN)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_21_CAN)

add_subdirectory(Crc/Crc_32)
target_link_libraries(Crc_Cal_App PRIVATE Crc_32)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_32)

add_subdirectory(Crc/Crc_64_ECMA)
target_link_libraries(Crc_Cal_App PRIVATE Crc_64_ECMA)
target_link_libraries(Crc_Cal_Module PRIVATE Crc_64_ECMA)