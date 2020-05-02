//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#include "Printable.h"
#include <iostream>
std::ostream &operator<<(std::ostream &os, const Printable &obj) {
    obj.print(os);
    return os;
}

