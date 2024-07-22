#include <pybind11/pybind11.h>
#include "Crc_Cal.h"

PYBIND11_MODULE(Crc_Cal_Module, m) {
    m.doc() = "CrcCal";
    m.def("computeDecInt", &computeDecInt, "A function that compute CAN CRC and return uint16_t");
    m.def("computeHexStr", &computeHexStr, "A function that compute CAN CRC and return string");
}