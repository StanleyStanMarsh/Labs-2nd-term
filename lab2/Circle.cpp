//
// Created by iasta on 10.03.2023.
//


#include "Circle.h"

Circle::Circle() {
    m_x = 0, m_y = 0, m_radius = 1;
}

Circle::Circle(int x, int y, int radius, colors color) : Shape(color) {
    m_x = x, m_y = y, m_radius = radius;
}

Circle::Circle(const Circle &other) : Shape(other) {
    m_x = other.m_x, m_y = other.m_y, m_radius = other.m_radius;
}

Circle::Circle(const Rect &other) : Shape(other) {
    m_x = (other.GetRight() + other.GetLeft()) / 2;
    m_y = (other.GetTop() + other.GetBottom()) / 2;
    m_radius = 1;
}

void Circle::WhereAmI() {
    std::cout << "Now I am in class Circle" << '\n';
}

void Circle::Inflate(int increment) {
    m_radius += increment;
}

Circle::~Circle() {
    std::cout << "Now I am in Circle's destructor!" << '\n';
}




