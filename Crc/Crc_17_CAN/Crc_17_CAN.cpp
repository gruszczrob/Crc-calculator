#include "Crc_17_CAN.h"

uint64_t Crc_17_CAN::computeDec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string Crc_17_CAN::computeHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeDec(input);
    return stream.str();
}