#include "Crc_17_CAN.h"

using namespace Crc_17_CAN;

uint64_t compute17Dec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string compute17Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << compute17Dec(input);
    return stream.str();
}
