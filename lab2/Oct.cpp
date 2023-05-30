#include "Oct.h"
#define PRINT(n, digit) (std::cout << "Digit number " << n << " in octal: " << digit << '\n')

void Oct::Show() {
    std::cout << "Octal representation: 0" << n2 << n1 << n0 << '\n';
}

void Oct::ShowDigit(int n) {
    switch (n) {
        case 1:
            PRINT(n, n2);
            break;
        case 2:
            PRINT(n, n1);
            break;
        case 3:
            PRINT(n, n0);
            break;
        default:
            break;
    }
}

void Oct::ChangeDigit(int n, unsigned char val) {
    switch (n) {
        case 1:
            n2 = val;
            break;
        case 2:
            n1 = val;
            break;
        case 3:
            n0 = val;
            break;
        default:
            break;
    }
}
