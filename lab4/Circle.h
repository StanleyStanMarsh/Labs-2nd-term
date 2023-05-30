#pragma once
#include "Point.h"
#include <iostream>
#define M_PI 3.14159265358979323846

class Circle {
    Point center;
    int radius;
public:
    Circle() : center(), radius(1) {}
    Circle(int c_x, int c_y, int rad) : center(c_x, c_y), radius(rad) {}

    bool operator==(const Circle& other) const;
    bool operator!=(const Circle& other) const;
    Circle& operator=(const Circle& other);
    friend std::ostream& operator<<(std::ostream& out, const Circle& crcl);

    int getCenterX() const;
    int getCenterY() const;
    int getRad() const;
    float getArea() const;
};
