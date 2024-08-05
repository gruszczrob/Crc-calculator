#include <iostream>
#include <Crc_8.h>
#include <Crc_15_CAN.h>
#include <Crc_17_CAN.h>
#include <Crc_16_DECT_R.h>
#include <Crc_21_CAN.h>
#include <Crc_32.h>
#include <Crc_64_ECMA.h>

int main() {
    const std::string aaa = "0000000000000110000001010001110110000011000000010000001000000011"; 
    std::vector<uint8_t> data = { 0x00, 0x06, 0x05, 0x1d, 0x83, 0x01, 0x02, 0x03};
    std::cout << Crc_32::computeHex(aaa);
    return 0;
}