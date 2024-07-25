#include "Crc_8.h"

uint64_t computeCRC8(std::vector<uint8_t>& data) {
    return computeCRC(data, LENGTH_8, INITIAL_VALUE_8, POLYNOMIAL_8, FINAL_XOR_VALUE_8, REFIN_8, REFOUT_8);
}

uint64_t compute8Dec(const std::string& input) {
    return computeCRC8(bitStringToByteArray(input));
}

std::string compute8Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC8(bitStringToByteArray(input));
    return stream.str();
}