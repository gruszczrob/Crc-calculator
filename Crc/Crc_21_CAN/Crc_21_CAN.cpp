#include "Crc_21_CAN.h"

uint64_t Crc_21_CAN::computeDec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

std::string Crc_21_CAN::computeHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeDec(input);
    return stream.str();
}