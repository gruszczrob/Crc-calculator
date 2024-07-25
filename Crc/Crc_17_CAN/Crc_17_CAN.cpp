#include "Crc_17_CAN.h"

uint64_t computeCRC17(std::vector<uint8_t>& data) {
    return computeCRC(data, LENGTH_17_CAN, INITIAL_VALUE_17_CAN, POLYNOMIAL_17_CAN, FINAL_XOR_VALUE_17_CAN, REFIN_17_CAN, REFOUT_17_CAN);
}

uint64_t compute17Dec(const std::string& input) {
    return computeCRC17(bitStringToByteArray(input));
}

std::string compute17Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC17(bitStringToByteArray(input));
    return stream.str();
}