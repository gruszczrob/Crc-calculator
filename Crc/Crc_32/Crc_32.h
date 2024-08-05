#ifndef CRC_32_H
#define CRC_32_H

#include <Functions.h>

class Crc_32 {
	// Parameters
	private:
		static const uint64_t POLYNOMIAL = 0x04C11DB7;
		static const uint64_t INITIAL_VALUE = 0xFFFFFFFF;
		static const uint64_t FINAL_XOR_VALUE = 0xFFFFFFFF;
		static const uint8_t LENGTH = 32;
		static const bool REFIN = true;
		static const bool REFOUT = true;

	// Functions
	public:
		static uint64_t computeDec(const std::string& input);
		static std::string computeHex(const std::string& input);
};
#endif