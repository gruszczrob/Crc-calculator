#include "Functions.h"

//REVERSE BITS
uint64_t reverseBits(uint64_t num, int n) {
    uint64_t result = 0;
    for (int i = 0; i < n; ++i) {
        result |= ((num >> i) & 1) << (n - 1 - i);
    }
    return result;
}

//CRC COMPUTE
uint64_t computeCRC(const std::string& input, const uint8_t length, const uint64_t initialValue, const uint64_t polynomial, const uint64_t finalXorValue, const bool refin, const bool refout) {
    std::vector<uint8_t> data = bitStringToByteArray(input);

    uint64_t crc = initialValue;
    const uint64_t limiter = (length == 64) ? 0xFFFFFFFFFFFFFFFF : (1ULL << length) - 1;
    const uint64_t mostValuableBit = (length == 64) ? 0x8000000000000000 : 1ULL << (length - 1);
    const uint8_t currentBit = length - 8;

    for (size_t i = 0; i < data.size(); ++i) {
        uint8_t byte = data[i];
        if (refin) {
            byte = static_cast<uint8_t>(reverseBits(byte, 8));
        }
        crc ^= (static_cast<uint64_t>(byte) << currentBit);

        for (uint8_t j = 0; j < 8; ++j) {
            if (crc & mostValuableBit) {
                crc = (crc << 1) ^ polynomial;
            }
            else {
                crc <<= 1;
            }
        }
    }
    if (refout) {
        crc = reverseBits(crc, length);
    }
    return (crc ^ finalXorValue) & limiter;
}

// BIT STRING TO VECTOR OF BYTE
std::vector<uint8_t> bitStringToByteArray(const std::string& bitString) {
    std::vector<uint8_t> byteArray;
    std::string paddedBitString = bitString;
    if (paddedBitString.size() % 8 != 0) {
        for (int i = (8 - (paddedBitString.size() % 8)); i > 0; i--) {
            paddedBitString = "0" + paddedBitString;
        }
    }

    for (size_t i = 0; i < paddedBitString.size(); i += 8) {
        std::string byteString = paddedBitString.substr(i, 8);
        uint8_t byteValue = static_cast<uint8_t>(std::stoi(byteString, nullptr, 2));
        byteArray.push_back(byteValue);
    }
    return byteArray;
}

