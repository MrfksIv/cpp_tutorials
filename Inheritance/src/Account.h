//
// Created by Κωνσταντινος Μορφακης on 01/04/2020.
//

#ifndef INHERITANCE_ACCOUNT_H
#define INHERITANCE_ACCOUNT_H

#include <string>

class Account {
public:
    double balance;
    std::string name;

    void deposit(double amount);
    bool withdraw(double amount);

    Account();
    Account(double balance);

    // Copy constructor
    Account(const Account &other);

    // Overload of the assignment operator
    Account operator=(Account &rhs);

    ~Account();
};


#endif //INHERITANCE_ACCOUNT_H
