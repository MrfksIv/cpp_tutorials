//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//

#include <iostream>
#include "DeepAccount.h"

DeepAccount::DeepAccount(double d) {
    balance = new double;
    *balance = d;

    std::cout << "Deep constructor called with d" << std::endl;
}


/**
 * The only thing that changes is the Copy Constructor which now assigns new storage on the heap
 * @param source
 */
DeepAccount::DeepAccount(const DeepAccount &source) {
    balance = new double;
    *balance = *source.balance;
    std::cout << "Copy constructor of DeepAccount called" << std::endl;
}

/**
 * The same can be achieved using initialization lists:
 */
//DeepAccount::DeepAccount(DeepAccount &source): DeepAccount {*source.balance} {
//    std::cout << "Copy constructor of DeepAccount called" << std::endl;
//}

DeepAccount::DeepAccount(DeepAccount &&source): DeepAccount {*source.balance} {
    /**
     * Instead of making a deep copy, we just copy the value of the pointer to the new object created by the Move Cosntructor.
     * IMPORTANT: WE SHOULD SET THE ADDRESS POINTER BY THE SOURCE R-VALUE OBJECT TO nullptr SO THAT WHEN ITS DESTRUCTOR
     * IS CALLED, THE AREA OF THE HEAP THAT IS NOW POINTED BY THE COPIED OBJECT WILL NOT BE CLEARED!
     */
    source.balance = nullptr;
    std::cout << "Move constructor of DeepAccount called" << std::endl;
}

DeepAccount::~DeepAccount() {
    delete balance;
    std::cout << "Destructor of DeepAccount called" << std::endl;
}

double DeepAccount::get_balance() const {
    return *balance;
}

void DeepAccount::set_balance(double d) {
    *balance = d;
}