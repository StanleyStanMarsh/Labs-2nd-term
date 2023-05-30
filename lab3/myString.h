#pragma once
#include <cstdarg>
#include <iostream>

class MyString
{
    char* m_pStr;	//строка-член класса
private:
    // Handle if the string is equal nullptr
    // Обрабатывает строку, если она равна nullptr
    void HandleStr(const char *);

public:
    // Default constructor (nullptr)
    // Конструктор по умолчанию (nullptr)
    MyString();

    // Constructor with specified parameters
    // Конструктор с указанными параметрами
    MyString(const char*);

    // Copy constructor
    // Конструктор копирования
    MyString(const MyString&);

    // Returns m_pStr
    // Возвращает m_pStr
    char* GetString() const;

    void SetNewString(const char *);

    void Concat(const char* other);

    // TODO: В одном из следующих трех методов возвращение ссылки неуместно. В каком и почему?

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