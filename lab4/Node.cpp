#include "List.h"

List::Node::Node(Node *prev, const Circle &crcl) : m_Data(crcl) {
    pNext = prev->pNext;
    prev->pNext = this;
    pPrev = prev;
    pNext->pPrev = this;
}

List::Node::Node() {
    pNext = pPrev = nullptr;
}

List::Node::~Node() {
    if (pNext != nullptr) pNext->pPrev = pPrev;
    if (pPrev != nullptr) pPrev->pNext = pNext;
    pPrev = pNext = nullptr;
}

Circle List::Node::getCircle() const {
    return m_Data;
}

bool List::Node::operator==(const Node &other) const {
    return (this->pNext == other.pNext && this->pPrev == other.pPrev && this->m_Data == other.m_Data);
}


List::Node &List::Node::operator=(const Node &other) {
    this->m_Data = other.m_Data;
    this->pNext = other.pNext, this->pPrev = other.pPrev;
    return *this;
}

