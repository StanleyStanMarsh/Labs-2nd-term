#pragma once
#include <iostream>
#include "Bin.h"
#include "Hex.h"
#include "Oct.h"

union MyByte {
    unsigned char value : 8;
    Bin bin;
    Hex hex;
    Oct oct;

    MyByte(unsigned char byte_value);
    void ShowDec();
    void ShowBin();
    void ShowHex();
    void ShowOct();
    void ShowChar();
    void ShowBinDigit(int n);
    void ShowHexDigit(int n);
    void ShowOctDigit(int n);
    void ChangeBinDigit(int n, unsigned char val);
    void ChangeHexDigit(int n, unsigned char val);
    void ChangeOctDigit(int n, unsigned char val);
};