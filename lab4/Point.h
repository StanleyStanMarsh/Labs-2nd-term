#pragma once

class Point {
    int point_x, point_y;
public:
    Point();
    Point(int x_coord, int y_coord);

    int getX() const;
    int getY() const;

    void setX(int x_coord);
    void setY(int y_coord);

    Point &operator+=(const Point &other);
    Point &operator+=(int increment);
    friend Point operator-=(Point &minuend, const Point &subtrahend);
    friend Point operator-=(Point &minuend, int subtrahend);

    Point operator+(const Point &other) const;
    Point operator+(int increment) const;
    friend Point operator+(int increment, const Point &other);

    friend Point operator-(const Point &point1, const Point &point2);
    friend Point operator-(const Point &point, int decrement);

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
};

Point operator+(const Point &other);
Point operator-(const Point &other);
