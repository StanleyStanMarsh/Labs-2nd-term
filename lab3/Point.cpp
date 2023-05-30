#include "Point.h"

Point::Point() {
    point_x = 0, point_y = 0;
}

Point::Point(int x_coord, int y_coord) {
    point_x = x_coord, point_y = y_coord;
}

int Point::GetX() const {
    return point_x;
}

int Point::GetY() const {
    return point_y;
}

void Point::SetX(int x_coord) {
    point_x = x_coord;
}

void Point::SetY(int y_coord) {
    point_y = y_coord;
}

Point &Point::operator+=(const Point &other) {
    point_x += other.point_x, point_y += other.point_y;
    return *this;
}

Point &Point::operator+=(int increment) {
    point_x += increment, point_y += increment;
    return *this;
}

Point Point::operator+(const Point &other) const {
    Point res;
    res.point_x = this->point_x + other.point_x;
    res.point_y = this->point_y + other.point_y;
    return res;
}

Point Point::operator+(int increment) const {
    Point res;
    res.point_x = this->point_x + increment;
    res.point_y = this->point_y + increment;
    return res;
}

Point operator-=(Point &minuend, const Point &subtrahend) {
    minuend.point_x -= subtrahend.point_x;
    minuend.point_y -= subtrahend.point_y;
    return minuend;
}

Point operator -=(Point& minuend, int subtrahend) {
    minuend.point_x -= subtrahend;
    minuend.point_y -= subtrahend;
    return minuend;
}

Point operator+(int increment, const Point &other) {
    Point res;
    res.point_x = other.point_x + increment;
    res.point_y = other.point_y + increment;
    return res;
}

Point operator-(const Point &point1, const Point &point2) {
    Point res;
    res.point_x = point1.point_x - point2.point_x;
    res.point_y = point1.point_y - point2.point_y;
    return res;
}

Point operator-(const Point &point, int decrement) {
    Point res;
    res.point_x = point.point_x - decrement;
    res.point_y = point.point_y - decrement;
    return res;
}

Point operator+(const Point &other) {
    return other;
}

Point operator-(const Point &other) {
    return Point(other.GetX() * (-1), other.GetY() * (-1));
}