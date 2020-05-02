//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#include "Savings.h"
#include <iostream>

void Savings::withdraw(double amount) {
    std::cout << "Savings::withdraw" << std::endl;
}

Savings::~Savings() {
    std::cout << "Savings destructor called!" << std::endl;
}
