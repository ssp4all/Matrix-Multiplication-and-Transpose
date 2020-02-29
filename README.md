@author: Suraj Pawar

# REPO: Source code for matrix multiplication and transposition in C++

## Directory structure
- main.cpp -
    A driver function which imports header file to perform matrix operations.
- mat.hpp -
    Header file with source code for matrix multiplication and transpose.

## Installation
- Make sure you have a C++ compiler 
- Above source code is tested on 

`Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/c++/4.2.1
Apple LLVM version 10.0.1 (clang-1001.0.46.4)
Target: x86_64-apple-darwin18.7.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
libltlnd-34864`

## Execution
- g++ main.cpp (compile)
- ./a.out (execute)

## Usage and Output
- Make Sure to import header file in your code `#include "mat.hpp" `
- Matrix Multiplication

        Matrix a (2*2) = 1 2 1 2

        Matrix b (2*2) = 1 2 1 2

        Use: vector<vector<int> > c = matrix_mul(a, b);
        OUPTUT: c (2*2) = `3 6 3 6`

- Matrix Transpose

        Matrix a (2*2) = 1 2 1 2

        Use: vector<vector<int> > c = matrix_transpose(a);

        OUPTUT: c (2*2) = 1 1 2 2 

