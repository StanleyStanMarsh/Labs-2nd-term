#include <cstring>
#include "myString.h"
#include <iostream>
using namespace std;

// Определение конструктора.
MyString::MyString() {
    m_pStr = nullptr;
}

MyString::MyString(const char * str) {
    HandleStr(str);
}

MyString::MyString(const MyString& other) {
    HandleStr(other.m_pStr);
}

void MyString::HandleStr(const char * str) {
    if (str == nullptr) {
        m_pStr = new char;
        *m_pStr = 0;
    }
    else {
        m_pStr = new char[strlen(str) + 1];
        strcpy(m_pStr, str);
    }
}

char* MyString::GetString() {
    return m_pStr;
}

void MyString::SetNewString(const char * str) {
    delete m_pStr;
    HandleStr(str);
}

// Определение деструктора.
MyString::~MyString() {
    delete m_pStr;
}

