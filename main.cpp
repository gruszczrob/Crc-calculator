#include <iostream>
#include "Crc_Cal.h"

int main() {
    const std::string aaa = "00000001000100000100001000000010001";
    std::cout << computeHexStr(aaa) << std::endl;
    return 0;
}