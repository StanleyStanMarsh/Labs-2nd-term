#pragma once
#include "Node.h"
#include <iostream>
#include <string>
#include "Circle.h"
#include <cassert>
#define CHECK_EMPTY(list) ((list.isEmpty()) ? "list is empty" : "list is not empty")
//typedef unsigned long long size_t;


class List {
    private:
    class Node {
        Node* pPrev;
        Node* pNext;
        Circle m_Data;
        Node();
        Node(Node *prev, const Circle &crcl);
        ~Node();
        friend class List;
        friend std::ostream &operator<<(std::ostream& out, List& list);
        friend std::istream &operator>>(std::istream& in, List& list);
    public:
        Circle getCircle() const;
        bool operator==(const Node& other) const;
        Node& operator=(const Node& other);

    };
    Node Head;
    Node Tail;
    size_t m_size;
    Node& getByIndex(size_t index);

    void swap(Node * , Node * );
public:
    List();
    ~List();

    size_t size() const { return m_size; }

    bool remove(const Circle &crcl);
    int removeAll(const Circle &crcl);
    void clear();
    bool isEmpty() const;

    Circle& operator[](size_t index);
    void push_front(const Circle &crcl);
    void push_back(const Circle &crcl);
    void swap(size_t i1, size_t i2);
    void sort();

    friend std::ostream &operator<<(std::ostream& out, List& list);
    friend std::istream &operator>>(std::istream& in, List& list);
};