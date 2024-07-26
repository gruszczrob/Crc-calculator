#include "Crc_21_CAN.h"

uint64_t computeCRC21(const std::string& input) {
    return computeCRC(input, LENGTH_21_CAN, INITIAL_VALUE_21_CAN, POLYNOMIAL_21_CAN, FINAL_XOR_VALUE_21_CAN, REFIN_21_CAN, REFOUT_21_CAN);
}

uint64_t compute21Dec(const std::string& input) {
    return computeCRC21(input);
}

std::string compute21Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC21(input);
    return stream.str();
}
