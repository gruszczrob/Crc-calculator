#ifndef CRC_64_ECMA_H
#define CRC_64_ECMA_H

#include <Functions.h>

// Parametry CRC-64-ECMA
constexpr uint64_t POLYNOMIAL_64_ECMA = 0x42F0E1EBA9EA3693; // Wielomian CRC-21-CAN
constexpr uint64_t INITIAL_VALUE_64_ECMA = 0x0000000000000000;  // Pocz?tkowa warto?? CRC
constexpr uint64_t FINAL_XOR_VALUE_64_ECMA = 0x0000000000000000;
constexpr uint8_t LENGTH_64_ECMA = 64;
constexpr bool REFIN_64_ECMA = false;
constexpr bool REFOUT_64_ECMA = false;

// Funkcje
uint64_t computeCRC64ECMA(std::vector<uint8_t>& data);
uint64_t compute64ECMADec(const std::string& input);
std::string compute64ECMAHex(const std::string& input);
#endif CRC_64_ECMA_H
