#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
/**
 * DERIVING CLASSES FROM EXISTING CLASSES - INHERITANCE
 * The inheritance syntax follows the following pattern:
 *
 * class Base {
 *      // Base class members...
 * }
 *
 * class Extended: [access-specifier] Base {
 *      // Derived class members...
 * }
 *
 * The access-specifier can be 'public', 'private' or 'protected'
 * Most other OOP languages only support public inheritance and is the most common.
 * To understand the difference between them, we first need to understand the difference between the different
 * access modifiers for class properties:
 *
 * PUBLIC INHERITANCE:
 * public :     Public members of the Base class remain public members in the derived class.
 * protected :  Protected members of the Base class remain Protected members in the derived class.
 * private :    The derived class has no access to the private members of the Base class.
 *
 * PROTECTED INHERITANCE:
 * public :     Public members of the Base class BECOME PROTECTED members in the derived class.
 * protected :  Protected members of the Base class remain Protected members in the derived class.
 * private :    The derived class has no access to the private members of the Base class.
 *
 * PRIVATE INHERITANCE:
 * public :     Public members of the Base class BECOME PRIVATE members in the derived class.
 * protected :  Protected members of the Base class BECOME PRIVATE members in the derived class.
 * private :    The derived class has no access to the private members of the Base class.
 *
 */
void display_account(const Account acc);

int main() {

    Account *account = new Account;
    std::cout<< "---------------------------------------------" << std::endl;
    /**
     * Notice that when a derived class is instantiated, The Base class constructor is FIRST called
     * followed by the constructor of the Derived class.
     *
     * The opposite happens when the destructor is called, i.e. the destructors are called in the reverse order
     * starting from the Derived class constructor.
     *
     * Notice that in the example below, the default no-args constructor of the base (Account) class is called.
     */
    Savings_Account *savingsAccount = new Savings_Account;

    std::cout<< "---------------------------------------------" << std::endl;
    /**
     * Here, the 1-arg constructor of the Base class is called because it was explicitly called in the Derived
     * class constructor (see Savings_Account.cpp:26):
     */
    Savings_Account *savingsAccount2 = new Savings_Account(100.0, 3.5);

    std::cout<< "---------------------------------------------" << std::endl;
    display_account(*account);
    std::cout<< "---------------------------------------------" << std::endl;

    account->deposit(200);
    savingsAccount->deposit(200);
    savingsAccount->withdraw(100);
    savingsAccount->withdraw(1090);

    delete account;

    std::cout<< "---------------------------------------------" << std::endl;
    delete savingsAccount;
    std::cout<< "---------------------------------------------" << std::endl;
    delete savingsAccount2;

    return 0;

}

void display_account(const Account acc) {
    std::cout << "Account Name: " << acc.name << std::endl << "Balance: " << acc.balance << std::endl;
}
