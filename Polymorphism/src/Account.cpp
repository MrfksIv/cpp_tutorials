//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//
#include <iostream>
#include "Account.h"

void Account::withdraw(double amount) {
    std::cout << "In Account::withdraw" << std::endl;
}

Account::~Account() {
    std::cout << "Account destructor called!" << std::endl;
}

void Account::print(std::ostream &os) const {
    os << "Account print called!" << std::endl;
}