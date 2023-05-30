#include "Pair.h"

MyString Pair::GetKey() {
    return this->key;
}

Data Pair::GetData() {
    return this->data;
}

MyString GetSex(Sex sex) {
    switch (sex)
    {
        case Sex::Male:
            return "Male";
            break;
        case Sex::Female:
            return "Female";
            break;
        case Sex::None:
            return "None";
            break;
        default:
            return  "None";
    }
}

std::ostream& operator<<(std::ostream& out, const Data& data) {
    out << "Age: " << data.age << "\nSex: " << GetSex(data.sex) <<
        "\nPost: " << data.post << "\nSalary: " << data.salary << "\n";
    return out;
}