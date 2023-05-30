#include "myString.h"
#include "Pair.h"
#pragma once

// TODO: Из каких соображений используется `Pair** records`, а не  `Pair* records`?

class BD {
    Pair** records;
    int size;
    int capacity;
    static const int DELTA = 5;
    void Resize();
public:
    BD() : size(0), capacity(0), records(nullptr) {}
    BD(const BD& other);
    BD(BD&& other);
    ~BD();

    Data& operator [] (const MyString& key);

    friend std::ostream& operator<<(std::ostream& out, const BD& bd);

    BD& operator=(const BD& other);
    BD& operator=(BD&& other) noexcept ;

    void Surnames() const;
    void Ages() const;
    void Sexes() const;
    void Posts() const;
    void Salaries() const;

    void Delete(MyString key);
};

// TODO: Какие из этих методов не должны быть видны пользователю вашего класса?
