#include "Crc_21_CAN.h"

using namespace Crc_21_CAN;

uint64_t compute21Dec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute21Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute21Dec(input);
    return stream.str();
}
