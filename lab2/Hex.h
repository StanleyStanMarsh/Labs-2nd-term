#pragma once
#include <iostream>

class Hex {
    unsigned short n0 : 4;
    unsigned short n1 : 4;
public:
    void Show();
    void ShowDigit(int n);
    void ChangeDigit(int n, unsigned char val);
};

