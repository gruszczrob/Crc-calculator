#include "Crc_Cal.h"

// OBLICZANIE CRC
uint16_t computeCRC(std::vector<uint8_t> data) {
    uint16_t crc = INITIAL_VALUE;
    for (size_t i = 0; i < data.size(); ++i) {
        crc ^= (data[i] << 7);  // XOR z aktualnym bajtem danych (przesuniętym w lewo)

        for (uint8_t j = 0; j < 8; j++) {   // Przetwarzanie każdego bitu
            crc <<= 1;
            if (crc & 0x8000) { // Jeśli najbardziej znaczący bit jest ustawiony
                crc ^= POLYNOMIAL;  // Przesuwanie w lewo i XOR z wielomianem
            }
        }
    }
    return crc ^ FINAL_XOR_VALUE;   // XOR na końcu
}

// STRING BITÓW DO VECTORA BYTEÓW
std::vector<uint8_t> bitStringToByteArray(std::string& bitString) {
    std::vector<uint8_t> byteArray;
    for (int i = (8 - (bitString.size() % 8)); i > 0; i--) {
        bitString = "0" + bitString;
    }
    for (size_t i = 0; i < bitString.size(); i += 8) {
        std::string byteString = bitString.substr(i, 8);
        uint8_t byteValue = static_cast<uint8_t>(std::stoi(byteString, nullptr, 2)); // Przekształć ciąg bitów na liczbę całkowitą typu uint8_t
        byteArray.push_back(byteValue);
    }
    return byteArray;
}
