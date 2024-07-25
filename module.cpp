#include <pybind11/pybind11.h>
#include <Crc_15_CAN.h>
#include <Crc_17_CAN.h>
#include <Crc_21_CAN.h>
#include <Crc_16_DECT_R.h>
#include <Crc_32.h>
#include <Crc_8.h>
#include <Crc_64_ECMA.h>


PYBIND11_MODULE(Crc_Cal_Module, m) {
    m.doc() = "CrcCal";
    m.def("compute15Dec", &compute15Dec, "A function that compute CAN CRC 15 and return uint64_t");
    m.def("compute15Hex", &compute15Hex, "A function that compute CAN CRC 15 and return string");
    m.def("compute17Dec", &compute17Dec, "A function that compute CAN CRC 17 and return uint64_t");
    m.def("compute17Hex", &compute17Hex, "A function that compute CAN CRC 17 and return string");
    m.def("compute21Dec", &compute21Dec, "A function that compute CAN CRC 21 and return uint64_t");
    m.def("compute21Hex", &compute21Hex, "A function that compute CAN CRC 21 and return string");
    m.def("compute16DectRDec", &computeCRC16DectRDec, "A function that compute CRC DECT R 16 and return uint64_t");
    m.def("compute16DectRHex", &computeCRC16DectRHex, "A function that compute CRC DECT R 16 and return string");
    m.def("compute32Dec", &compute32Dec, "A function that compute CRC 32 and return uint64_t");
    m.def("compute32Hex", &compute32Hex, "A function that compute CRC 32 and return string");
    m.def("compute8Dec", &compute8Dec, "A function that compute CRC 8 and return uint64_t");
    m.def("compute8Hex", &compute8Hex, "A function that compute CRC 8 and return string");
    m.def("compute64ECMADec", &compute64ECMADec, "A function that compute CRC 64 ECMA and return uint64_t");
    m.def("compute64ECMAHex", &compute64ECMAHex, "A function that compute CRC 64 ECMA and return string");
}