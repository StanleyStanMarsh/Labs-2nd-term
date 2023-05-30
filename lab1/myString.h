#pragma once
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
    // const
    MyString(const MyString&);

    // Returns m_pStr
    // ���������� m_pStr
    char* GetString();

    void SetNewString(const char *);

    // Destructor
    ~MyString();
};
