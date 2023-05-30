#pragma once
#include <iostream>

enum colors {RED = 1, ORANGE, YELLOW, GREEN, BLUE, VIOLET};

class Shape {
    colors color;
public:
    Shape();
    Shape(colors col);

    void getColor(colors& color) const;
    virtual void WhereAmI();
    virtual void Inflate(int);

    virtual ~Shape();
};

