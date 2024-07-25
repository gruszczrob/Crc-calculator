#ifndef CRC_15_CAN_H
#define CRC_15_CAN_H

#include <Functions.h>

// Parametry CRC-15-CAN
constexpr uint64_t POLYNOMIAL_15_CAN = 0xc599; // Wielomian CRC-15-CAN (x^15 + x^14 + x^10 + x^8 + x^7 + x^4 + x^3 + 1)
constexpr uint64_t INITIAL_VALUE_15_CAN = 0x0000;  // Początkowa wartość CRC
constexpr uint64_t FINAL_XOR_VALUE_15_CAN = 0x000; // Wartość XOR na końcu obliczeń CRC
constexpr uint8_t LENGTH_15_CAN = 15;
constexpr bool REFIN_15_CAN = false;
constexpr bool REFOUT_15_CAN = false;

// Funkcje
uint64_t computeCRC15(std::vector<uint8_t>& data);
uint64_t compute15Dec(const std::string& input);
std::string compute15Hex(const std::string& input);
#endif CRC_15_CAN_H
