#ifndef CRC_17_CAN_H
#define CRC_17_CAN_H

#include <Functions.h>

class Crc_17_CAN {
	// Parameters
	private:
		static const uint64_t POLYNOMIAL = 0x1685B;
		static const uint64_t INITIAL_VALUE = 0x0000;
		static const uint64_t FINAL_XOR_VALUE = 0x000;
		static const uint8_t LENGTH = 17;
		static const bool REFIN = false;
		static const bool REFOUT = false;

	// Functions
	public:
		static uint64_t computeDec(const std::string& input);
		static std::string computeHex(const std::string& input);
};
#endif