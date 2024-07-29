#ifndef CRC_17_CAN_H
#define CRC_17_CAN_H

#include <Functions.h>

// Parameters
namespace Crc_17_CAN {
	constexpr uint64_t POLYNOMIAL = 0x1685B;
	constexpr uint64_t INITIAL_VALUE = 0x0000;
	constexpr uint64_t FINAL_XOR_VALUE = 0x000;
	constexpr uint8_t LENGTH = 17;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}
// Functions
uint64_t compute17Dec(const std::string& input);
std::string compute17Hex(const std::string& input);

#endif
