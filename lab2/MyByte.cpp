#include "MyByte.h"

MyByte::MyByte(unsigned char byte_value) {
    this->value = byte_value;
}

void MyByte::ShowDec() {
    std::cout << "Decimal representation: " << (int)this->value << '\n';
}

void MyByte::ShowBin() {
    this->bin.Show();
}

void MyByte::ShowHex() {
    this->hex.Show();
}

void MyByte::ShowOct() {
    this->oct.Show();
}

void MyByte::ShowChar() {
    std::cout << "Matching character: " << (unsigned char)(this->value) << '\n';
}

void MyByte::ShowBinDigit(int n) {
    this->bin.ShowDigit(n);
}

void MyByte::ShowHexDigit(int n) {
    this->hex.ShowDigit(n);
}

void MyByte::ShowOctDigit(int n) {
    this->oct.ShowDigit(n);
}

void MyByte::ChangeBinDigit(int n, unsigned char val) {
    this->bin.ChangeDigit(n, val);
}

void MyByte::ChangeHexDigit(int n, unsigned char val) {
    this->hex.ChangeDigit(n, val);
}

void MyByte::ChangeOctDigit(int n, unsigned char val) {
    this->oct.ChangeDigit(n, val);
}
