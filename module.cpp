#include <pybind11/pybind11.h>
#include <Crc_8.h>
#include <Crc_15_CAN.h>
#include <Crc_16_DECT_R.h>
#include <Crc_17_CAN.h>
#include <Crc_21_CAN.h>
#include <Crc_32.h>
#include <Crc_64_ECMA.h>

PYBIND11_MODULE(Crc_Cal_Module, m) {
    m.doc() = "CrcCal";
    m.def("compute15Dec", &Crc_15_CAN::computeDec, "A function that compute CAN CRC 15 and return uint64_t");
    m.def("compute15Hex", &Crc_15_CAN::computeHex, "A function that compute CAN CRC 15 and return string");
    m.def("compute17Dec", &Crc_17_CAN::computeDec, "A function that compute CAN CRC 17 and return uint64_t");
    m.def("compute17Hex", &Crc_17_CAN::computeHex, "A function that compute CAN CRC 17 and return string");
    m.def("compute21Dec", &Crc_21_CAN::computeDec, "A function that compute CAN CRC 21 and return uint64_t");
    m.def("compute21Hex", &Crc_21_CAN::computeHex, "A function that compute CAN CRC 21 and return string");
    m.def("compute16DectRDec", &Crc_16_DECT_R::computeDec, "A function that compute CRC DECT R 16 and return uint64_t");
    m.def("compute16DectRHex", &Crc_16_DECT_R::computeHex, "A function that compute CRC DECT R 16 and return string");
    m.def("compute32Dec", &Crc_32::computeDec, "A function that compute CRC 32 and return uint64_t");
    m.def("compute32Hex", &Crc_32::computeHex, "A function that compute CRC 32 and return string");
    m.def("compute8Dec", &Crc_8::computeDec, "A function that compute CRC 8 and return uint64_t");
    m.def("compute8Hex", &Crc_8::computeHex, "A function that compute CRC 8 and return string");
    m.def("compute64ECMADec", &Crc_64_ECMA::computeDec, "A function that compute CRC 64 ECMA and return uint64_t");
    m.def("compute64ECMAHex", &Crc_64_ECMA::computeHex, "A function that compute CRC 64 ECMA and return string");
}