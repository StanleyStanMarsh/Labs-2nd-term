#pragma once
#include <iostream>

class Rect{
	int m_left, m_right, m_top, m_bottom;
public:
    // Constructor with specified parameters
    // Конструктор с указанными параметрами
    Rect(int left, int right, int top, int bottom);

    // Default constructor
    // Конструктор по умолчанию
    Rect();

    // Copy constructor
    // Конструктор копирования
    Rect(const Rect&);

    // Inflates the object of Rect class by the specified increments
    // Расширяет прямоугольник на заданные приращения
    void InflateRect(int left_increment, int top_increment, int right_increment, int bottom_increment);

    void InflateRect(int lt_increment = 1, int rb_increment = 1);

    // Sets the coordinates of both corners of the rectangle
    // Задает координаты обоих углов прямоугольника
    void SetAll(int left, int right, int top, int bottom);

    // Extracts the coordinates of both corners of the rectangle in left, right, top, bottom
    // Извлекает координаты обоих углов прямоугольника в left, right, top, bottom
    void GetAll(int& left, int& right, int& top, int& bottom);

    // Prints values of fields
    // Выводит значения полей
    // m_left_, m_right_, m_top_, m_bottom_
    void PrintCoord();

    int GetLeft() const;
    int GetRight() const;
    int GetTop() const;
    int GetBottom() const;

    // Destructor
    ~Rect();
};