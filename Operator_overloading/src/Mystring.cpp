//
// Created by Κωνσταντινος Μορφακης on 29/03/2020.
//
#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() {
    str =  new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s): str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring &source): str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constuctor used" << std::endl;
}

Mystring::Mystring(Mystring &&source) {
    str = source.str;
    source.str = {nullptr};
    std::cout << "Move constuctor used" << std::endl;
}

Mystring::~Mystring() {
    delete [] str;
}

void Mystring::display() const {
    std::cout << str << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}

// Copy assignment
Mystring Mystring::operator=(const Mystring &rhs) {
    // check for self-assignment (e.g. s1 = s1) and if true, return the existing memory address
    if (this == &rhs) {
        return *this;
    }

    // before we assign a new memory address to the destination object, we delete anything that it
    // currently points to prevent a memory leak
    delete [] str;

    // allocate new storage enough to hold the length of the right hand object
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    // return the object so that we can support chained assignment
    return *this;
}

// Move assignment
Mystring Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs) {
        return *this;
    }

    delete [] str;
    str = rhs.str;

    rhs.str = nullptr;

    return *this;
}

Mystring Mystring::operator-() {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(str, buff);

    for (size_t i {0}; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;

    return temp;

}

//bool Mystring::operator==(const Mystring &rhs) const {
//    bool res = std::strcmp(str, rhs.str) == 0;
//    return res;
//}

/**
 * The method below is also overloaded as a global function in main.cpp.
 * We CANNOT define both
 */
//Mystring Mystring::operator+(const Mystring &rhs) const {
//    size_t buffer_size = std::strlen(str) + std::strlen(rhs.str);
//    char *buffer = new char[buffer_size];
//
//    std::strcpy(buffer, str);
//    std::strcat(buffer, rhs.str);
//
//    Mystring temp {buffer};
//    delete [] buffer;
//
//    return temp;
//
//}



