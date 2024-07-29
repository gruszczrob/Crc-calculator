#include "Crc_15_CAN.h"

using namespace Crc_15_CAN;

uint64_t compute15Dec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute15Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute15Dec(input);
    return stream.str();
}
