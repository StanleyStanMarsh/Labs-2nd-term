#pragma once
#include <cstdarg>
#include <iostream>

class MyString
{
    char* m_pStr;	//������-���� ������
private:
    // Handle if the string is equal nullptr
    // ������������ ������, ���� ��� ����� nullptr
    void HandleStr(const char *);

public:
    // Default constructor (nullptr)
    // ����������� �� ��������� (nullptr)
    MyString();

    // Constructor with specified parameters
    // ����������� � ���������� �����������
    MyString(const char*);

    // Copy constructor
    // ����������� �����������
    MyString(const MyString&);

    // Returns m_pStr
    // ���������� m_pStr
    char* GetString() const;

    void SetNewString(const char *);

    void Concat(const char* other);

    // TODO: � ����� �� ��������� ���� ������� ����������� ������ ���������. � ����� � ������?

    MyString& operator = (const MyString &other);

    MyString& operator+=(const MyString &other);

    MyString operator+(const MyString &other) const;

    bool operator==(const char* s) const;

    bool operator==(const MyString& other) const;

    bool operator!=(const MyString& other) const;

    friend std::ostream& operator<<(std::ostream &out, const MyString &str);

    // Destructor
    ~MyString();
};

MyString str_concat(int cnt, ...);