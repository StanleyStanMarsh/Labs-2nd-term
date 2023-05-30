#include "Shape.h"

Shape::Shape(colors col) {
    color = col;
}

Shape::Shape() {
    color = RED;
}

void Shape::getColor(colors &color) const {
    color = this->color;
}

void Shape::WhereAmI() {
    std::cout << "Now I am in class Shape" << '\n';
}

void Shape::Inflate(int) {}

Shape::~Shape() {
    std::cout << "Now I am in Shape's destructor!" << '\n';
}
