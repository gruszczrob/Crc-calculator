#ifndef CRC_15_CAN_H
#define CRC_15_CAN_H

#include <Functions.h>

// Parameters
namespace Crc_15_CAN {
	constexpr uint64_t POLYNOMIAL = 0xc599;
	constexpr uint64_t INITIAL_VALUE = 0x0000;
	constexpr uint64_t FINAL_XOR_VALUE = 0x000;
	constexpr uint8_t LENGTH = 15;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}

// Functions
uint64_t compute15Dec(const std::string& input);
std::string compute15Hex(const std::string& input);
#endif
