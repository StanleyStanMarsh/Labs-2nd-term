#pragma once
#include <iostream>

class Rect{
	int m_left, m_right, m_top, m_bottom;
public:
    // Constructor with specified parameters
    // ����������� � ���������� �����������
    Rect(int left, int right, int top, int bottom);

    // Default constructor
    // ����������� �� ���������
    Rect();

    // Copy constructor
    // ����������� �����������
    Rect(const Rect&);

    // Inflates the object of Rect class by the specified increments
    // ��������� ������������� �� �������� ����������
    void InflateRect(int left_increment, int top_increment, int right_increment, int bottom_increment);

    void InflateRect(int lt_increment = 1, int rb_increment = 1);

    // Sets the coordinates of both corners of the rectangle
    // ������ ���������� ����� ����� ��������������
    void SetAll(int left, int right, int top, int bottom);

    // Extracts the coordinates of both corners of the rectangle in left, right, top, bottom
    // ��������� ���������� ����� ����� �������������� � left, right, top, bottom
    void GetAll(int& left, int& right, int& top, int& bottom);

    // Prints values of fields
    // ������� �������� �����
    // m_left_, m_right_, m_top_, m_bottom_
    void PrintCoord();

    int GetLeft() const;
    int GetRight() const;
    int GetTop() const;
    int GetBottom() const;

    // Destructor
    ~Rect();
};