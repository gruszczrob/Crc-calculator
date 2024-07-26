#include "Crc_16_DECT_R.h"

uint64_t computeCRC16DectR(const std::string& input) {
    return computeCRC(input, LENGTH_16_DECT_R, INITIAL_VALUE_16_DECT_R, POLYNOMIAL_16_DECT_R, FINAL_XOR_VALUE_16_DECT_R, REFIN_16_DECT_R, REFOUT_16_DECT_R);

}

uint64_t computeCRC16DectRDec(const std::string& input) {
    return computeCRC16DectR(input);
}

std::string computeCRC16DectRHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC16DectR(input);
    return stream.str();
}
