//
// Created by Κωνσταντινος Μορφακης on 05/04/2020.
//

#include "Savings_Account.h"
#include <iostream>

/**
 * NOTE: By default, the 'default' no-args constructor of the Base class will be
 * called when we create the Savings_Account object.
 */
Savings_Account::Savings_Account(): int_rate {3.0} {
    std::cout << "Savings_Account class 0-arg constructor called" << std::endl;
};

Savings_Account::~Savings_Account() {
    std::cout << "Savings_Account class destructor called" << std::endl;
}

/**
 * If we want any other Base constructor to be called, we need to explicitly call it
 * in our derived class constructor as below:
 */
Savings_Account::Savings_Account(double balance, double int_rate): Account(balance), int_rate{int_rate} {
    std::cout << "Savings_Account class 2-arg constructor called" << std::endl;
}

Savings_Account Savings_Account::operator=(Savings_Account &other) {
    if (this == &other) {
        return *this;
    }
    Account::operator=(other);
    int_rate = other.int_rate;

    return *this;
}

/**
 * To call
 *
 */
Savings_Account::Savings_Account(const Savings_Account &other): Account(other), int_rate {other.int_rate} {
    std::cout <<"Savings_account copy constructor called" << std::endl;
}

/**
 * We can override a Base method by redefining the exact same method signature as in the Base class.
 * Note that we can still call the Base class method within our overriden method.
 */
void Savings_Account::deposit(double amount) {
    double amountToDeposit = amount * (1 + int_rate / 100);
    std::cout << "Deposited in savings with interest rate: " << int_rate << "%" << std::endl;
    Account::deposit(amountToDeposit);
}

/**
 *
 * We don't need to override the withdraw method since it doesn't do any different functionality compared to
 * the Account::withdraw method
 */
// Inherits Account::withdraw(double amount)