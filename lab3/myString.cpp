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

char* MyString::GetString() const {
    return m_pStr;
}

void MyString::SetNewString(const char * str) {
    delete m_pStr;
    HandleStr(str);
}

void MyString::Concat(const char *other) {
    if (other == nullptr) return;
    int len1 = strlen(other);
    int len2 = m_pStr == nullptr ? 0 : strlen(m_pStr);
    char* str1 = new char[len1 + len2 + 1];
    if (m_pStr) {
        memcpy(str1, m_pStr, len2);
        memcpy(str1 + len2, other, len1 + 1);
    }
    else memcpy(str1, other, len1 + 1);
    delete[] m_pStr;
    m_pStr = str1;
}

MyString &MyString::operator=(const MyString &other) {
    if (this->m_pStr == other.m_pStr) return *this;
    delete[] this->m_pStr;
    HandleStr(other.m_pStr);
    return *this;
}

MyString &MyString::operator+=(const MyString &other) {
    Concat(other.m_pStr);
    return *this;
}

MyString MyString::operator+(const MyString &other) const {
    return MyString(*this) += other;
}

bool MyString::operator==(const char *s) const {
    return (strcmp(this->GetString(), s) == 0);
}

bool MyString::operator==(const MyString& other) const {
    return (strcmp(this->GetString(), other.GetString()) == 0);
}

bool MyString::operator!=(const MyString& other) const {
    return (strcmp(this->GetString(), other.GetString()) != 0);
}

std::ostream &operator<<(ostream &out, const MyString &str) {
    out << str.m_pStr;
    return out;
}

// Определение деструктора.
MyString::~MyString() {
    delete m_pStr;
}


// глобальные функции
MyString str_concat(int cnt, ...) {
    MyString str;
    va_list p;
    va_start(p, cnt);
    while (cnt != 0) {
        str.Concat(va_arg(p, const char*));
        cnt--;
    }
    va_end(p);
    return str;
}

