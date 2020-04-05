//
// Created by Κωνσταντινος Μορφακης on 05/04/2020.
//

#ifndef INHERITANCE_SAVINGS_ACCOUNT_H
#define INHERITANCE_SAVINGS_ACCOUNT_H

#include "Account.h"

class Savings_Account: public Account {
public:
    double int_rate;

    Savings_Account();
    Savings_Account(double balance, double int_rate);
    ~Savings_Account();

    Savings_Account(const Savings_Account &other);

    Savings_Account operator=(Savings_Account &rhs);

    void deposit(double amount);
//    void withdraw(double amount);


};


#endif //INHERITANCE_SAVINGS_ACCOUNT_H
