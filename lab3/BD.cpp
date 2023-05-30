#include "BD.h"

BD::BD(const BD &other) {
    this->size = other.size, this->capacity = other.capacity;
    this->records = new Pair*[capacity];
    for (int i = 0; i < size; i++) {
        this->records[i] = new Pair;
        *(this->records[i]) = *(other.records[i]);
    }
}

BD::BD(BD&& other) : records(other.records), size(other.size), capacity(other.capacity) {
    other.records = nullptr, other.size = other.capacity = 0;
}

Data &BD::operator[](const MyString& key) {
    for (int i = 0; i < size; i++) {
        if (records[i]->GetKey() == key) {
            return records[i]->data;
        }
    }

    if (size >= capacity) {
        capacity += DELTA;
        Resize();
    }
    records[size] = new Pair(key, Data());
    return records[size++]->data;
}

void BD::Surnames() const {
    std::cout << "Surnames:\n";
    for (int i = 0; i < size; i++) {
        MyString Key = this->records[i]->GetKey();
        std::cout << i + 1 << ". " << Key << "\n";
    }
}

void BD::Ages() const {
    std::cout << "Ages:\n";
    for (int i = 0; i < size; i++) {
        const Data& data = this->records[i]->GetData();
        std::cout << i + 1 << ". " << data.age << "\n";
    }
}

void BD::Sexes() const {
    std::cout << "Sexes:\n";
    for (int i = 0; i < size; i++) {
        const Data& data = this->records[i]->GetData();
        std::cout << i + 1 << ". " << GetSex(data.sex) << "\n";
    }
}

void BD::Posts() const {
    std::cout << "Posts:\n";
    for (int i = 0; i < size; i++) {
        const Data& data = this->records[i]->GetData();
        std::cout << i + 1 << ". " << data.post << "\n";
    }
}

void BD::Salaries() const {
    std::cout << "Salaries:\n";
    for (int i = 0; i < size; i++) {
        const Data& data = this->records[i]->GetData();
        std::cout << i + 1 << ". " << data.salary << "\n";
    }
}

void BD::Resize() {
    Pair** tmp = new Pair * [capacity];
    for (int i = 0; i < size; i++) {
        tmp[i] = records[i];
    }
    delete[] records;
    records = tmp;
}

void BD::Delete(MyString key) {
    bool f = false;
    Pair **tmp = new Pair *[capacity];
    for (int i = 0; i < size - 1; i++) {
        if (f) {
            tmp[i] = records[i + 1];
            continue;
        }
        if (records[i]->GetKey() == key) {
            f = true;
            tmp[i] = records[i + 1];
            continue;
        }
        tmp[i] = records[i];
    }
    if (records[size - 1]->GetKey() != key && !f) {
        delete[] tmp;
        return;
    }
    tmp[size - 1] = records[size - 1];
    if (--size < capacity - DELTA) capacity -= DELTA;
    delete[] records;
    records = tmp;
}

BD::~BD() {
    for (int i = 0; i < size; i++) {
        delete records[i];
    }
    delete[] records;
}

std::ostream &operator<<(std::ostream &out, const BD &bd) {
    for (int i = 0; i < bd.size; i++) {
        out << i + 1 << ". " << "Surname: " << bd.records[i]->GetKey() << '\n' << bd.records[i]->GetData() << '\n';
    }
    out << '\n';
    return out;
}

BD& BD::operator=(const BD& other) {
    // TODO: ѕриведите пример, когда этот if "сработает"
    if (this->records == other.records) return *this;
    this->size = other.size, this->capacity = other.capacity;

    for (int i = 0; i < size; i++)
        delete this->records[i];
    delete[] this->records;

    this->records = new Pair * [capacity];
    for (int i = 0; i < size; i++) {
        this->records[i] = new Pair;
        *(this->records[i]) = *(other.records[i]);
    }
    return *this;
}

BD& BD::operator=(BD&& other) noexcept {
    this->size = other.size;
    this->capacity = other.capacity;

    delete[] this->records;
    this->records = other.records;

    other.records = nullptr;
    other.size = other.capacity = 0;

    return *this;
}