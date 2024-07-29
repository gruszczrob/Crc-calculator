<p align="center">
  <img height=200px width = auto src="https://github.com/user-attachments/assets/c2a0a2c2-120e-40aa-ba0c-b0b603077ec1">
</p>

# Crc - calculator

A C++ library designed for Python, enabling efficient CRC (Cyclic Redundancy Check) calculations based on provided bit strings. This library serves as a vital tool for developers needing reliable error-detection mechanisms in their Python applications.



## Key Features

- **CRC Calculation**: The core functionality of the library is to compute CRC values from input bit strings. This implementation ensures accuracy and reliability, providing a crucial tool for data integrity verification.

- **Extensibility**: One of the standout features of this library is its modular design. Adding new CRC algorithms is straightforward, allowing developers to extend the library's functionality with minimal effort. This design facilitates quick adaptation to various CRC standards without the need for extensive modifications.

- **Ease of Integration**: The library is designed for seamless integration with Python projects. Comprehensive documentation and examples are provided to help developers quickly incorporate CRC calculations into their workflows.
## Technical Details

- **Language**: Implemented in C++ and exposed to Python through bindings.
- **Modularity**: Designed with a clear separation of core functionality and algorithm-specific implementations, making the addition of new CRC variants a simple process.
- **Compatibility**: Works with Python 3.x and is compatible with major operating systems, ensuring broad applicability.
## Installation

To install the library, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/gruszczrob/Crc-calculator.git
```
2. Navigate to the created directory and clone the pybind11 repository:

```bash
cd Crc-calculator
git clone https://github.com/pybind/pybind11.git
```
3. Follow the instructions for your operating system:
---
- **Windows**:
1. Download and install Microsoft Visual Studio.
2. Open the Crc-calculator directory in Visual Studio.
3. Build the project by selecting "Build" and then "Build All" or by pressing Ctrl+Shift+B.
4. If the build completes without errors, the library will be located in the ./out/build/ directory. This directory will have a platform-specific name, but inside it, you will find the file Crc_Cal_Module.[Your OS specialization].pyd.
5. Copy this .pyd file to the same directory as your Python script.
6. Import Crc_Cal_Module in python file

----
- **Linux**:
1. Create build folder and inside it release folder
```bash
mkdir build
cd build
mkdir release
cd release
```
2. Use cmake and make
```bash
cmake ../..
make
```
3. If the build compiles without errors, the library will be located in release folder. It should be named: Crc_Cal_Module.[Your OS specialization].so
4. Copy this .os file to same directory as your Python script.
5. Import Crc_Cal_Module in python file

## How to add new Crc 
*Many crc models are presented on this [web page](https://reveng.sourceforge.io/crc-catalogue/all.html)*

**In places where anything is in those brackets ```/*[]*/``` fill it with custom info**
1. In Crc directory add Folder named [Crc_Name]
2. In folder create 3 files:
    - [Crc_Name].cpp
    - [Crc_Name].h
    - CMakeLists.txt
3. Fill those files with templates:
  - [Crc_Name].cpp
```c++
﻿#include "/*[Crc_Name]*/.h"


uint64_t computeCRC/*[Crc_Name]*/(const std::string& input) {
    return computeCRC(input, LENGTH, INITIAL_VALUE, POLYNOMIAL, FINAL_XOR_VALUE, REFIN, REFOUT);
}

uint64_t compute/*[Crc_Name]*/Dec(const std::string& input) {
    return computeCRC/*[Crc_Name]*/(input);
}

std::string compute/*[Crc_Name]*/Hex(const std::string& input) {
    std::stringstream stream;
    stream << "CRC: 0x" << std::hex << std::uppercase << computeCRC/*[Crc_Name]*/(input);
    return stream.str();
} 
```
  - [Crc_Name].h
```c++
﻿#ifndef CRC_/*[Crc_Name with capital letters]*/_H
#define CRC_/*[Crc_Name with capital letters]*/_H

#include <Functions.h>

constexpr uint64_t POLYNOMIAL = /*[Crc_POLYNOMINAL]*/;
constexpr uint64_t INITIAL_VALUE = /*[CRC_INITIAL_VALUE]*/;
constexpr uint64_t FINAL_XOR_VALUE = /*[CRC_FINAL_XOR_VALUE]*/;
constexpr uint8_t LENGTH = /*[CRC_LENGTH]*/;
constexpr bool REFIN = /*[DOES_CRC_HAS_REFIN]*/;
constexpr bool REFOUT = /*[DOES_CRC_HAS_REFOUT]*/;

uint64_t computeCRC/*[Crc_Name]*/(const std::string& input);
uint64_t compute/*[Crc_Name]*/Dec(const std::string& input);
std::string compute/*[Crc_Name]*/Hex(const std::string& input);
#endif
```
  - CMakeLists.txt
```cmake
cmake_minimum_required(VERSION 3.12)

project(/*[Crc_Name]*/)

add_library(/*[Crc_Name]*/ STATIC /*[Crc_Name]*/.cpp)

target_link_libraries(/*[Crc_Name]*/ PRIVATE Functions)

target_include_directories(/*[Crc_Name]*/ PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
```

4. In main folder add to CMakeLists.txt new lines at the end of file:
```cmake
add_subdirectory(Crc//*[Crc_Name]*/)
target_link_libraries(Crc_Cal_App PRIVATE /*[Crc_Name]*/)
target_link_libraries(Crc_Cal_Module PRIVATE /*[Crc_Name]*/)

```

5. In main folder add to module.cpp new lines inside this function: ```PYBIND11_MODULE(Crc_Cal_Module, m) {}```
```c++
    m.def("compute/*[Crc_Name]*/Dec", &compute/*[Crc_Name]*/Dec, "A function that compute CRC /*[Crc_Name]*/ and return uint64_t");
    m.def("compute/*[Crc_Name]*/Hex", &compute/*[Crc_Name]*/Hex, "A function that compute CRC /*[Crc_Name]*/ and return string");
```
also in the same file at the top of the file add this:
```cpp
#include </*[Crc_Name]*/.h>
```

6. *Optional* If you want to be able to test this crc in main.cpp at the to of the file add this:
```cpp
#include </*[Crc_Name]*/.h>
```
7. **Important: Atfer previous operations, you need to build project again to be able to use your crc in python. And you need to place new library file in python project instead of the old one.**

## Crc build-in functions in library
In library by default there are few crc implementation, if you don't want them you should remove everything that is in how to add new crc tutorial. This crc are:
  - Crc 8
  - Crc 15 CAN
  - Crc 16 DECT R
  - Crc 17 CAN FD
  - Crc 21 CAN FD
  - Crc 32
  - Crc 64 ECMA

**Functions connected to them in python are**:
  - compute8Dec(BINARY STRING) - A function that compute CRC 8 and return decimal value in uint64_t
  - compute8Hex(BINARY STRING) - A function that compute CRC 8 and return hexadecimal value in string
  - compute15Dec(BINARY STRING) - A function that compute CAN CRC 15 and return decimal value in uint64_t
  - compute15Hex(BINARY STRING) - A function that compute CAN CRC 15 and return hexadecimal value in string
  - compute16DectRDec(BINARY STRING) - A function that compute CRC DECT R 16 and return decimal value in uint64_t
  - compute16DectRHex(BINARY STRING) - A function that compute CRC DECT R 16 and return hexadecimal value in string
  - compute17Dec(BINARY STRING) - A function that compute CAN CRC 17 and return decimal value in uint64_t
  - compute17Hex(BINARY STRING) - A function that compute CAN CRC 17 and return hexadecimal value in string
  - compute21Dec(BINARY STRING) - A function that compute CAN CRC 21 and return decimal value in uint64_t
  - compute21Hex(BINARY STRING) - A function that compute CAN CRC 21 and return hexadecimal value in string
  - compute32Dec(BINARY STRING) - A function that compute CRC 32 and return decimal value in uint64_t
  - compute32Hex(BINARY STRING) - A function that compute CRC 32 and return hexadecimal value in string
  - compute64ECMADec(BINARY STRING) - A function that compute CRC 64 ECMA and return decimal value in uint64_t
  - compute64ECMAHex(BINARY STRING) - A function that compute CRC 64 ECMA and return hexadecimal value in string

If you want to print all avaliable crc function in python use:
```python
import Crc_Cal_Module # type: ignore
print(dir(Crc_Cal_Module))
```
## Examples of usage
  - In this case we want to compute Crc 64 ECMA for *1000010000001101100100010000101000101111110110010100101011100111101110110101001111110100011010010110* and get result in hexadecimal number stored in string.
  ```python
import Crc_Cal_Module # type: ignore
print(Crc_Cal_Module.compute64ECMAHex("1000010000001101100100010000101000101111110110010100101011100111101110110101001111110100011010010110"))
  ```
  Output: *CRC: 0xDC110E6C2CFA806C*

  - In this case we want to commpute Crc 32 for *000010001101100011110010101110000101110000* and get result in decimal number stored in uint64_t
  ```python
import Crc_Cal_Module # type: ignore
print(Crc_Cal_Module.compute32Dec("000010001101100011110010101110000101110000"))
  ```
  Output: *2506624157*



## Author

- [@gruszczrob](https://www.github.com/gruszczrob)


## Feedback

If you have any feedback, please reach out to me at gruszczrobert@proton.me
