#include "Crc_16_DECT_R.h"

using namespace Crc_16_DECT_R;

uint64_t computeCRC16DectRDec(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);

}

std::string computeCRC16DectRHex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC16DectRDec(input);
    return stream.str();
}
