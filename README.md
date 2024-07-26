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
## Author

- [@gruszczrob](https://www.github.com/gruszczrob)


## Feedback

If you have any feedback, please reach out to me at gruszczrobert@proton.me
