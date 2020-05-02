//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#include "Circle.h"
#include <iostream>

Circle::~Circle() {
    std::cout << "Circle destructor called!" << std::endl;
}
void Circle::draw() {
    std::cout <<"Circle::draw called!" << std::endl;
}

void Circle::rotate() {
    std::cout <<"Circle::rotate called!" << std::endl;
}
