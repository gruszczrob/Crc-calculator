#include "Crc_32.h"

using namespace Crc_32;

uint64_t compute32Dec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute32Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute32Dec(input);
    return stream.str();
}
