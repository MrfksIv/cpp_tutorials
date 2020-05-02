//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_PRINTABLE_H
#define POLYMORPHISM_PRINTABLE_H

#include <iostream>

class Printable {
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;

};


#endif //POLYMORPHISM_PRINTABLE_H
