#ifndef CRC_8_H
#define CRC_8_H

#include <Functions.h>

// Parametry CRC-21-CAN
constexpr uint64_t POLYNOMIAL_8 = 0x07; // Wielomian CRC-21-CAN
constexpr uint64_t INITIAL_VALUE_8 = 0x00;  // Pocz?tkowa warto?? CRC
constexpr uint64_t FINAL_XOR_VALUE_8 = 0x00;
constexpr uint8_t LENGTH_8 = 8;
constexpr bool REFIN_8 = false;
constexpr bool REFOUT_8 = false;

// Funkcje
uint64_t computeCRC8(const std::string& input);
uint64_t compute8Dec(const std::string& input);
std::string compute8Hex(const std::string& input);
#endif
