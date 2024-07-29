#ifndef CRC_64_ECMA_H
#define CRC_64_ECMA_H

#include <Functions.h>

// Parameters
namespace Crc_64_ECMA {
	constexpr uint64_t POLYNOMIAL = 0x42F0E1EBA9EA3693;
	constexpr uint64_t INITIAL_VALUE = 0x0000000000000000;
	constexpr uint64_t FINAL_XOR_VALUE = 0x0000000000000000;
	constexpr uint8_t LENGTH = 64;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}

// Functions
uint64_t compute64ECMADec(const std::string& input);
std::string compute64ECMAHex(const std::string& input);
#endif
