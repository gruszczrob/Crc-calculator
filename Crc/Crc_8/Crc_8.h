#ifndef CRC_8_H
#define CRC_8_H

#include <Functions.h>

// Parameters
namespace Crc_8 {
	constexpr uint64_t POLYNOMIAL = 0x07;
	constexpr uint64_t INITIAL_VALUE = 0x00;
	constexpr uint64_t FINAL_XOR_VALUE = 0x00;
	constexpr uint8_t LENGTH = 8;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}

// Functions
uint64_t compute8Dec(const std::string& input);
std::string compute8Hex(const std::string& input);
#endif
