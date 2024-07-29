#include "Crc_64_ECMA.h"

using namespace Crc_64_ECMA;

uint64_t compute64ECMADec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute64ECMAHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute64ECMADec(input);
    return stream.str();
}
