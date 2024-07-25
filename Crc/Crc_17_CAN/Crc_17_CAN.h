#ifndef CRC_17_CAN_H
#define CRC_17_CAN_H

#include <Functions.h>

// Parametry CRC-17-CAN
constexpr uint64_t POLYNOMIAL_17_CAN = 0x1685B; // Wielomian CRC-17-CAN
constexpr uint64_t INITIAL_VALUE_17_CAN = 0x0000;  // Pocz?tkowa warto?? CRC
constexpr uint64_t FINAL_XOR_VALUE_17_CAN = 0x000;
constexpr uint8_t LENGTH_17_CAN = 17;
constexpr bool REFIN_17_CAN = false;
constexpr bool REFOUT_17_CAN = false;

// Funkcje
uint64_t computeCRC17(std::vector<uint8_t>& data);
uint64_t compute17Dec(const std::string& input);
std::string compute17Hex(const std::string& input);

#endif CRC_17_CAN_H
