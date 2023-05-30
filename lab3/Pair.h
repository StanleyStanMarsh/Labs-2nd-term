#pragma once

enum Sex {Male, Female, None};

struct Data {
    int age;
    Sex sex;
    int salary;
    MyString post;

    Data(int ag, Sex sx, int sal, MyString pst) : age(ag), sex(sx), salary(sal), post(pst) {};
    Data() : age(-1), sex(Sex::None), salary(-1), post("unemployed") {};

    friend std::ostream& operator<<(std::ostream& out, const Data& data);
};

class Pair {
    MyString key;
    Data data;
public:
    Pair() : key("Anon") {}
    Pair(MyString k, const Data& d) : key(k), data(d) {}

    MyString GetKey();
    Data GetData();
    friend class BD;
};

MyString GetSex(Sex sex);