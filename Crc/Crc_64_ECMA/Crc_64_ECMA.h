#ifndef CRC_64_ECMA_H
#define CRC_64_ECMA_H

#include <Functions.h>

class Crc_64_ECMA {
	// Parameters
	private:
		static const uint64_t POLYNOMIAL = 0x42F0E1EBA9EA3693;
		static const uint64_t INITIAL_VALUE = 0x0000000000000000;
		static const uint64_t FINAL_XOR_VALUE = 0x0000000000000000;
		static const uint8_t LENGTH = 64;
		static const bool REFIN = false;
		static const bool REFOUT = false;

	// Functions
	public:
		static uint64_t computeDec(const std::string& input);
		static std::string computeHex(const std::string& input);
};
#endif