#ifndef CRC_32_H
#define CRC_32_H

#include <Functions.h>

// Parametry CRC-21-CAN
constexpr uint64_t POLYNOMIAL_32 = 0x04C11DB7; // Wielomian CRC-21-CAN
constexpr uint64_t INITIAL_VALUE_32 = 0xFFFFFFFF;  // Pocz?tkowa warto?? CRC
constexpr uint64_t FINAL_XOR_VALUE_32 = 0xFFFFFFFF;
constexpr uint8_t LENGTH_32 = 32;
constexpr bool REFIN_32 = true;
constexpr bool REFOUT_32 = true;

// Funkcje
uint64_t computeCRC32(const std::string& input);
uint64_t compute32Dec(const std::string& input);
std::string compute32Hex(const std::string& input);
#endif
