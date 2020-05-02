//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_SAVINGS_H
#define POLYMORPHISM_SAVINGS_H
#include "Account.h"

class Savings: public Account {
public:

    virtual void withdraw(double amount);
    virtual ~Savings();
};


#endif //POLYMORPHISM_SAVINGS_H
