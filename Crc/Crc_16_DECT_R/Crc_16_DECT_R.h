#ifndef CRC_16_DECT_R
#define CRC_16_DECT_R

#include <Functions.h>

// Parametry CRC-16-DECT-R
constexpr uint64_t POLYNOMIAL_16_DECT_R = 0x0589; // Wielomian CRC-15-CAN (x^15 + x^14 + x^10 + x^8 + x^7 + x^4 + x^3 + 1)
constexpr uint64_t INITIAL_VALUE_16_DECT_R = 0x0000;  // Początkowa wartość CRC
constexpr uint64_t FINAL_XOR_VALUE_16_DECT_R = 0x0001; // Wartość XOR na końcu obliczeń CRC
constexpr uint8_t LENGTH_16_DECT_R = 16;
constexpr bool REFIN_16_DECT_R = false;
constexpr bool REFOUT_16_DECT_R = false;

// Funkcje
uint64_t computeCRC16DectR(const std::string& input);
uint64_t computeCRC16DectRDec(const std::string& input);
std::string computeCRC16DectRHex(const std::string& input);
#endif
