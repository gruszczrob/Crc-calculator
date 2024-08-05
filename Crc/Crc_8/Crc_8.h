#ifndef CRC_8_H
#define CRC_8_H

#include <Functions.h>

class Crc_8 {
	// Parameters
	private:
		static const uint64_t POLYNOMIAL = 0x07;
		static const uint64_t INITIAL_VALUE = 0x00;
		static const uint64_t FINAL_XOR_VALUE = 0x00;
		static const uint8_t LENGTH = 8;
		static const bool REFIN = false;
		static const bool REFOUT = false;

	// Functions
	public:
		static uint64_t computeDec(const std::string& input);
		static std::string computeHex(const std::string& input);
};
#endif