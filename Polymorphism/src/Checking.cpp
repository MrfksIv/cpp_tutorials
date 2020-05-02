//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//
#include <iostream>
#include "Checking.h"

void Checking::withdraw(double amount) {
    std::cout << "Checking::withdraw" << std::endl;
}

Checking::~Checking() {
    std::cout << "Checking destructor called" << std::endl;
}

