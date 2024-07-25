#include "Crc_16_DECT_R.h"

uint64_t computeCRC16DectR(std::vector<uint8_t>& data) {
    return computeCRC(data, LENGTH_16_DECT_R, INITIAL_VALUE_16_DECT_R, POLYNOMIAL_16_DECT_R, FINAL_XOR_VALUE_16_DECT_R, REFIN_16_DECT_R, REFOUT_16_DECT_R);

}

uint64_t computeCRC16DectRDec(const std::string& input) {
    return computeCRC16DectR(bitStringToByteArray(input));
}

std::string computeCRC16DectRHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC16DectR(bitStringToByteArray(input));
    return stream.str();
}