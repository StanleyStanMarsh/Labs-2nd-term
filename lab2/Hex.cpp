#include "Hex.h"

void Hex::Show() {
    std::cout << "Hexadecimal representation: 0x"
    << (n1 > 9 ? (char)('a' + n1 % 10) : (char)('0' + n1)) << (n0 > 9 ? (char)('a' + n0 % 10) : (char)('0' + n0)) << '\n';
}

void Hex::ShowDigit(int n) {
    if (n == 1) {
        std::cout << "Digit number " << n << " in hexadecimal: "
        << (n1 > 9 ? (char)('a' + n1 % 10) : (char)('0' + n1)) << '\n';
    }
    else if (n == 2) {
        std::cout << "Digit number " << n << " in hexadecimal: "
        << (n0 > 9 ? (char)('a' + n0 % 10) : (char)('0' + n0)) << '\n';
    }
}

void Hex::ChangeDigit(int n, unsigned char val) {
    n == 1 ? n1 = val : n0 = val;
}
