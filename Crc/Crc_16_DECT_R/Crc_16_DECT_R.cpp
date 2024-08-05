#include "Crc_16_DECT_R.h"

uint64_t Crc_16_DECT_R::computeDec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string Crc_16_DECT_R::computeHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeDec(input);
    return stream.str();
}