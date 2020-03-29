//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//

/**
 * Include with angle-brackets <...> are used to include SYSTEM header files which the compiler knows where to find.
 * Include with quotes "..." are used to include LOCAL header files to the current project
 */

#include <iostream>
#include "Account.h"



void Account::set_balance(double bal) {
    balance = bal;
}

double Account::get_balance() {
    return balance;
}

/**
 *  Note that we can define a single constructor and then use that constructor in other constructor definitions.
 *  Note also that in the below example we use Constructor Initialization Lists which are more efficient and faster
 *  as they avoid first creating an empty string, and then assigning the name parameter that we passed to it.
 * @param name
 * @param balance
 */

Account::Account(string name, double balance): name{name}, balance {balance} {
    std::cout << "Balance AND name constructor - " << name << std::endl;
};

/**
 * The 'old school' way to to do in this manner:
 */
//Account::Account(string name, double balance) {
//    name = name;
//    balance = balance;
//};


/**
 * Here we use the previous constructor that we defined using some default values to create another 2 Constructors.
 * This called 'delegating the constructors'
 * We are allowed to declare as many constructors as we want as long as they have a unique signature so that the
 * compiler can tell them apart.
 */
Account::Account(): Account("Default", 0) {
    std::cout << "No args" << std::endl;
};

Account::Account(string name): Account {name, 0} {
    std::cout << "Balance only constructor" << std::endl;
};

Account::~Account() {
    std::cout << "Account destructor called! - " << name << std::endl;
}

/**
 * This is the Copy Constructor
 * @param source
 */
//Account::Account(const Account &source): name{source.name}, balance{source.balance} {
//    std::cout << "Account Copy Cosntructor called for - " << name << std::endl;
//}

/**
 * We can use Delegeation in the copy cosntructor as well:
 */
Account::Account(const Account &source): Account {source.name, source.balance} {
    std::cout << "Account Copy Cosntructor called for - " << name << std::endl;
};