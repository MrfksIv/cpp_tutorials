//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//

#include <iostream>
#include "ShallowAccount.h"

ShallowAccount::ShallowAccount(double d) {
    balance = new double;
    *balance = d;

    std::cout << "ShallowAccount constructor called with d" << std::endl;
}

ShallowAccount::ShallowAccount(const ShallowAccount &source) {
    std::cout << "Copy constructor of ShallowAccount called" << std::endl;
}

ShallowAccount::~ShallowAccount() {
    delete balance;
    std::cout << "Destructor of ShallowAccount called" << std::endl;
}

double ShallowAccount::get_balance() {
    return *balance;
}

void ShallowAccount::set_balance(double d) {
    *balance = d;
}