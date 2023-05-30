#pragma once
#include <iostream>

class Oct {
    unsigned short n0 : 3;
    unsigned short n1 : 3;
    unsigned short n2 : 2;
public:
    void Show();
    void ShowDigit(int n);
    void ChangeDigit(int n, unsigned char val);
};
