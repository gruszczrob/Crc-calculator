#ifndef CRC_CAL_H
#define CRC_CAL_H

#include <iostream>
#include <string>
#include <cstdint>
#include <vector>
#include <stdexcept>
#include <>

// Parametry CRC-15-CAN
constexpr uint16_t POLYNOMIAL = 0xc599;      // Wielomian CRC-15-CAN (x^15 + x^14 + x^10 + x^8 + x^7 + x^4 + x^3 + 1)
constexpr uint16_t INITIAL_VALUE = 0x0000;   // Początkowa wartość CRC
constexpr uint16_t FINAL_XOR_VALUE = 0x000;  // Wartość XOR na końcu obliczeń CRC

// Deklaracje funkcji
uint16_t computeCRC(std::vector<uint8_t> data);
std::vector<uint8_t> bitStringToByteArray(std::string& bitString);

#endif // CRC_CAL_H
