#include "Crc_64_ECMA.h"

uint64_t computeCRC64ECMA(std::vector<uint8_t>& data) {
    return computeCRC(data, LENGTH_64_ECMA, INITIAL_VALUE_64_ECMA, POLYNOMIAL_64_ECMA, FINAL_XOR_VALUE_64_ECMA, REFIN_64_ECMA, REFOUT_64_ECMA);
}

uint64_t compute64ECMADec(const std::string& input) {
    return computeCRC64ECMA(bitStringToByteArray(input));
}

std::string compute64ECMAHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC64ECMA(bitStringToByteArray(input));
    return stream.str();
}