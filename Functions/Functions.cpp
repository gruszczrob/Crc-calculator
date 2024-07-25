#include "Functions.h"

//OBRACANIE BITÓW LICZBY
uint64_t reverseBits(uint64_t num, int n) {
    uint64_t result = 0;
    for (int i = 0; i < n; ++i) {
        result |= ((num >> i) & 1) << (n - 1 - i);
    }
    return result;
}

//LICZENIE CRC
uint64_t computeCRC(std::vector<uint8_t>& data, const uint8_t length, const uint64_t initialValue, const uint64_t polynomial, const uint64_t finalXorValue, const bool refin, const bool refout) {
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
    return (crc ^ finalXorValue) & limiter; // XOR na ko?cu
}

// STRING BITÓW DO VECTORA BYTEÓW
std::vector<uint8_t> bitStringToByteArray(const std::string& bitString) {
    std::vector<uint8_t> byteArray;
    std::string paddedBitString = bitString;
    // Dodaj zera na pocz?tku, aby d?ugo?? by?a wielokrotno?ci? 8
    if (paddedBitString.size() % 8 != 0) {
        for (int i = (8 - (paddedBitString.size() % 8)); i > 0; i--) {
            paddedBitString = "0" + paddedBitString;
        }
    }

    for (size_t i = 0; i < paddedBitString.size(); i += 8) {
        std::string byteString = paddedBitString.substr(i, 8);
        uint8_t byteValue = static_cast<uint8_t>(std::stoi(byteString, nullptr, 2)); // Przekszta?? ci?g bitów na liczb? ca?kowit? typu uint8_t
        byteArray.push_back(byteValue);
    }
    return byteArray;
}

