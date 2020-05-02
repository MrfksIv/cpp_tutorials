//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_ACCOUNT_H
#define POLYMORPHISM_ACCOUNT_H


#include "Printable.h"

class Account: public Printable {
public:
    virtual void withdraw(double amount);
    virtual ~Account();
    virtual void print(std::ostream &os) const override;
};


#endif //POLYMORPHISM_ACCOUNT_H
