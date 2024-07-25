#ifndef CRC_21_CAN_H
#define CRC_21_CAN_H

#include <Functions.h>

// Parametry CRC-21-CAN
constexpr uint64_t POLYNOMIAL_21_CAN = 0x102899; // Wielomian CRC-21-CAN
constexpr uint64_t INITIAL_VALUE_21_CAN = 0x0000;  // Pocz?tkowa warto?? CRC
constexpr uint64_t FINAL_XOR_VALUE_21_CAN = 0x000;
constexpr uint8_t LENGTH_21_CAN = 21;
constexpr bool REFIN_21_CAN = false;
constexpr bool REFOUT_21_CAN = false;

// Funkcje
uint64_t computeCRC21(std::vector<uint8_t>& data);
uint64_t compute21Dec(const std::string& input);
std::string compute21Hex(const std::string& input);
#endif CRC_21_CAN_H
