#include "Crc_8.h"

using namespace Crc_8;

uint64_t compute8Dec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute8Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute8Dec(input);
    return stream.str();
}
