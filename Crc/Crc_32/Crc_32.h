#ifndef CRC_32_H
#define CRC_32_H

#include <Functions.h>

// Parameters
namespace Crc_32 {
	constexpr uint64_t POLYNOMIAL = 0x04C11DB7;
	constexpr uint64_t INITIAL_VALUE = 0xFFFFFFFF;
	constexpr uint64_t FINAL_XOR_VALUE = 0xFFFFFFFF;
	constexpr uint8_t LENGTH = 32;
	constexpr bool REFIN = true;
	constexpr bool REFOUT = true;
}

// Functions
uint64_t compute32Dec(const std::string& input);
std::string compute32Hex(const std::string& input);
#endif
