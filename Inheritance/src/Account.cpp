//
// Created by Κωνσταντινος Μορφακης on 01/04/2020.
//

#include "Account.h"
#include <iostream>

Account::Account(): balance{0.0}, name {"Morf's Account"} {
    std::cout << "Account class 0-arg constructor called" << std::endl;
};

Account::Account(double balance): balance{balance}, name {"Morf's Account"} {
    std::cout << "Account class 1-arg constructor called" << std::endl;
};

Account::~Account() {
    std::cout << "Account class Destructor called" << std::endl;
};

Account::Account(const Account &other): balance {other.balance} {
    std::cout << "Account Copy constructor called" << std::endl;
};

Account Account::operator=(Account &rhs) {
    if (this == &rhs) {
        return *this;
    }
    balance = rhs.balance;
    name = rhs.name;

    return *this;
}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited " << amount << "EUR" << std::endl;
}


bool Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        std::cout << "Withdrew " << amount << "EUR" << std::endl;
        return true;
    }
    std::cout << "Failed to withdraw. Insuffcient funds" << std::endl;
    return false;
}
