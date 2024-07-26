#include "Crc_32.h"

uint64_t computeCRC32(const std::string& input) {
    return computeCRC(input, LENGTH_32, INITIAL_VALUE_32, POLYNOMIAL_32, FINAL_XOR_VALUE_32, REFIN_32, REFOUT_32);
}

uint64_t compute32Dec(const std::string& input) {
    return computeCRC32(input);
}

std::string compute32Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC32(input);
    return stream.str();
}
