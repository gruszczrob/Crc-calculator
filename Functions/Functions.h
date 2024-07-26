#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <cstdint>
#include <vector>
#include <stdexcept>
#include <sstream>

uint64_t reverseBits(uint64_t num, int n);
uint64_t computeCRC(const std::string& input, const uint8_t LENGTH_15_CAN, const uint64_t initialValue, const uint64_t polynominal, const uint64_t finalXorValue, const bool refin, const bool refout);
std::vector<uint8_t> bitStringToByteArray(const std::string& bitString);

#endif
