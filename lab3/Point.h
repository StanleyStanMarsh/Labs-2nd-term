#pragma once

class Point {
    int point_x, point_y;
public:
    Point();
    Point(int x_coord, int y_coord);

    int GetX() const;
    int GetY() const;

    void SetX(int x_coord);
    void SetY(int y_coord);

    Point &operator+=(const Point &other);
    Point &operator+=(int increment);
    friend Point operator-=(Point &minuend, const Point &subtrahend);
    friend Point operator-=(Point &minuend, int subtrahend);

    Point operator+(const Point &other) const;
    Point operator+(int increment) const;
    friend Point operator+(int increment, const Point &other);

    friend Point operator-(const Point &point1, const Point &point2);
    friend Point operator-(const Point &point, int decrement);

};

Point operator+(const Point &other);
Point operator-(const Point &other);

// TODO: ¬ чем разница между оператором `Point operator+(const Point &other)` на стр. 29 и на стр. 20?
// TODO: „то делает ключевое слово const дл€ метода и в каких методах этого класса оно уместно?