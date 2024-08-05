#include "Crc_64_ECMA.h"

uint64_t Crc_64_ECMA::computeDec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string Crc_64_ECMA::computeHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeDec(input);
    return stream.str();
}