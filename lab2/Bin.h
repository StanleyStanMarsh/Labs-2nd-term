#pragma once
#include <iostream>

class Bin {
    unsigned short n0 : 1;
    unsigned short n1 : 1;
    unsigned short n2 : 1;
    unsigned short n3 : 1;
    unsigned short n4 : 1;
    unsigned short n5 : 1;
    unsigned short n6 : 1;
    unsigned short n7 : 1;
public:
    void Show();
    void ShowDigit(int n);
    void ChangeDigit(int n, unsigned char val);
};

