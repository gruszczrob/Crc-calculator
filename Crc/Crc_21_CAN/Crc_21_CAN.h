#ifndef CRC_21_CAN_H
#define CRC_21_CAN_H

#include <Functions.h>

// Parameters
namespace Crc_21_CAN {
	constexpr uint64_t POLYNOMIAL = 0x102899;
	constexpr uint64_t INITIAL_VALUE = 0x0000;
	constexpr uint64_t FINAL_XOR_VALUE = 0x000;
	constexpr uint8_t LENGTH = 21;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}

// Functions
uint64_t compute21Dec(const std::string& input);
std::string compute21Hex(const std::string& input);
#endif
