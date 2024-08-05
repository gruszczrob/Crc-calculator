#ifndef CRC_16_DECT_R
#define CRC_16_DECT_R

#include <Functions.h>

class Crc_16_DECT_R {
	// Parameters
	private:
		static const uint64_t POLYNOMIAL = 0x0589;
		static const uint64_t INITIAL_VALUE = 0x0000;
		static const uint64_t FINAL_XOR_VALUE = 0x0001;
		static const uint8_t LENGTH = 16;
		static const bool REFIN = false;
		static const bool REFOUT = false;

	// Functions
	public:
		static uint64_t computeDec(const std::string& input);
		static std::string computeHex(const std::string& input);
};
#endif