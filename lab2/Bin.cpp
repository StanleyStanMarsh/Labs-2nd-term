#include "Bin.h"
#define PRINT(n, digit) (std::cout << "Digit number " << n << " in binary: " << digit << "\n")

void Bin::Show() {
    std::cout << "Binary representation: 0b" << n7 << n6 << n5 << n4 << n3 << n2 << n1 << n0 << '\n';
}

void Bin::ShowDigit(int n) {
    switch (n){
        case 1:
            PRINT(n, n7);
            break;
        case 2:
            PRINT(n, n6);
            break;
        case 3:
            PRINT(n, n5);
            break;
        case 4:
            PRINT(n, n4);
            break;
        case 5:
            PRINT(n, n3);
            break;
        case 6:
            PRINT(n, n2);
            break;
        case 7:
            PRINT(n, n1);
            break;
        case 8:
            PRINT(n, n0);
            break;
        default:
            break;
    }
}

void Bin::ChangeDigit(int n, unsigned char val) {
    switch (n) {
        case 1:
            n7 = val;
            break;
        case 2:
            n6 = val;
            break;
        case 3:
            n5 = val;
            break;
        case 4:
            n4 = val;
            break;
        case 5:
            n3 = val;
            break;
        case 6:
            n2 = val;
            break;
        case 7:
            n1 = val;
            break;
        case 8:
            n0 = val;
            break;
        default:
            break;
    }
}
