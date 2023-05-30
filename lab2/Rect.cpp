#include "Rect.h"

Rect::Rect(int left, int right, int top, int bottom, colors color) : Shape(color) {
    m_left = left, m_right = right, m_top = top, m_bottom = bottom;
}

Rect::Rect() {
    m_left = 1, m_right = 4, m_top = 3, m_bottom = 1;
}

Rect::Rect(const Rect & other) : Shape(other){
    m_left = other.m_left, m_right = other.m_right, m_top = other.m_top, m_bottom = other.m_bottom;
}

void Rect::Inflate(int increment) {
    m_left -= increment, m_right += increment, m_bottom -= increment, m_top += increment;
}

void Rect::InflateRect(int left_increment, int top_increment, int right_increment, int bottom_increment) {
    m_left -= left_increment;
    m_top += top_increment;
    m_right += right_increment;
    m_bottom -= bottom_increment;
}

void Rect::InflateRect(int lt_increment, int rb_increment) {
    m_left -= lt_increment;
    m_top += lt_increment;
    m_right += rb_increment;
    m_bottom -= rb_increment;
}

void Rect::SetAll(int left, int right, int top, int bottom) {
    m_left = left;
    m_right = right;
    m_top = top;
    m_bottom = bottom;
}

void Rect::GetAll(int &left, int &right, int &top, int &bottom) {
    left = m_left;
    right = m_right;
    top = m_top;
    bottom = m_bottom;
}

void Rect::PrintCoord() {
    std::cout << m_left << ' ' <<  m_right << ' ' << m_top << ' ' << m_bottom << std::endl;
}

int Rect::GetLeft() const {
    return m_left;
}
int Rect::GetRight() const {
    return m_right;
}
int Rect::GetTop() const {
    return m_top;
}
int Rect::GetBottom() const {
    return m_bottom;
}

void Rect::WhereAmI() {
    std::cout << "Now I am in class Rect" << '\n';
}

Rect::~Rect() {
    std::cout << "Now I am in Rect's destructor!" << '\n';
}
