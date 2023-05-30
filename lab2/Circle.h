#pragma once
#include "Shape.h"
#include "Rect.h"

class Circle : public Shape {
    int m_x, m_y, m_radius;
public:
    Circle();
    Circle(int left, int right, int radius, colors color = (colors)5);
    Circle(const Circle& other);
    Circle(const Rect& other);

    void Inflate(int increment) override;
    void WhereAmI() override;

    ~Circle() override;
};
