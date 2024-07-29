#ifndef CRC_16_DECT_R
#define CRC_16_DECT_R

#include <Functions.h>

// Parameters
namespace Crc_16_DECT_R {
	constexpr uint64_t POLYNOMIAL = 0x0589;
	constexpr uint64_t INITIAL_VALUE = 0x0000;
	constexpr uint64_t FINAL_XOR_VALUE = 0x0001;
	constexpr uint8_t LENGTH = 16;
	constexpr bool REFIN = false;
	constexpr bool REFOUT = false;
}

// Functions
uint64_t computeCRC16DectRDec(const std::string& input);
std::string computeCRC16DectRHex(const std::string& input);
#endif
