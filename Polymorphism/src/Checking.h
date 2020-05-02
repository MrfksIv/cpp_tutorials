//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_CHECKING_H
#define POLYMORPHISM_CHECKING_H
#include "Account.h"

class Checking: public Account {
public:
    virtual void withdraw(double amount) override ;
    virtual ~Checking();
};


#endif //POLYMORPHISM_CHECKING_H
