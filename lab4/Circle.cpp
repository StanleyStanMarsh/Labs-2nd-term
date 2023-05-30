#include "Circle.h"

int Circle::getCenterX() const {
    return center.getX();
}

int Circle::getCenterY() const {
    return center.getY();
}

int Circle::getRad() const {
    return radius;
}

bool Circle::operator==(const Circle &other) const {
    return (this->center == other.center && this->radius == other.radius);
}

bool Circle::operator!=(const Circle &other) const {
    return !(*this == other);
}

std::ostream &operator<<(std::ostream &out, const Circle &crcl) {
    out << "x: " << crcl.getCenterX() << " y: " << crcl.getCenterY() << " r: " << crcl.getRad();
    return out;
}

float Circle::getArea() const {
    return M_PI * this->radius * this->radius;
}

Circle &Circle::operator=(const Circle &other) {
    this->radius = other.radius, this->center = other.center;
    return *this;
}
