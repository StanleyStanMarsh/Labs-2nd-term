#pragma once
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
    // const
    MyString(const MyString&);

    // Returns m_pStr
    // Возвращает m_pStr
    char* GetString();

    void SetNewString(const char *);

    // Destructor
    ~MyString();
};
