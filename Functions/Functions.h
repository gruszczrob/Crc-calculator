#ifndef CRC_CAL_H
#define CRC_CAL_H

#include <iostream>
#include <string>
#include <cstdint>
#include <vector>
#include <stdexcept>
#include <sstream>

uint64_t reverseBits(uint64_t num, int n);
uint64_t computeCRC(std::vector<uint8_t>& data, const uint8_t LENGTH_15_CAN, const uint64_t initialValue, const uint64_t polynominal, const uint64_t finalXorValue, const bool refin, const bool refout);
std::vector<uint8_t> bitStringToByteArray(const std::string& bitString);

#endif CRC_CAL_H