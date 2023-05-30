/*
#pragma once
#include "Circle.h"

class Node {
    Node* pPrev;
    Node* pNext;
    Circle m_Data;
    Node();
    Node(Node *prev, const Circle &d);
    ~Node();
public:
    Circle getCircle() const;
    friend std::ostream &operator<<(std::ostream& out, const Node& node);
    bool operator==(const Node& other) const;
    Node& operator=(const Node& other);
    friend class List;
};
*/
