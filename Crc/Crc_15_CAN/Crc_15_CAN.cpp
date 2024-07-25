﻿#include "Crc_15_CAN.h"


uint64_t computeCRC15(std::vector<uint8_t>& data) {
    return computeCRC(data, LENGTH_15_CAN, INITIAL_VALUE_15_CAN, POLYNOMIAL_15_CAN, FINAL_XOR_VALUE_15_CAN, REFIN_15_CAN, REFOUT_15_CAN);
}

uint64_t compute15Dec(const std::string& input) {
    return computeCRC15(bitStringToByteArray(input));
}

std::string compute15Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC15(bitStringToByteArray(input));
    return stream.str();
}