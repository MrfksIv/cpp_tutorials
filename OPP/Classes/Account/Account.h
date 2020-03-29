//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//
/**
 * WE USE THE INCLUDE GUARDS #ifndef below to make sure that the header
 * is not read two times by the compiler which would result in duplicate identifier error!
 * Some compilers also support the '#pragma once' directive which achieves the same thing
 *
 * FOR THIS FILE TO BECOME ACCESSIBLE IN OUR main.cpp FILE, WE NEED TO ADD IT IN CMakeLists.txt file:
 * include_directories("./Classes/Account")
 */
#ifndef OPP_ACCOUNT_H
#define OPP_ACCOUNT_H

#include <string>
using namespace std;

class Account {
private:
    double balance;

public:
    // from C++ 11 we are allowed to give 'default' values to attributes from the class definition
    string name {"Account"};

    // Methods can be implemented inline, inside the class declaration:
    double get_balance();

    void set_balance(double);
    bool deposit(double);
    bool withdraw(double);

    /**
     * Class constructors are declared in the following way. Notice that we can declare mulitple constructors
     * using overloading
     */
    Account();
    Account(string name);
    Account(string name, double balance);

    /**
     * Class destructors are defined in the following way using the tilde '~' before the class name.
     * Destructors can not be overloaded - ONLY 1 destructor per class with not return type and no parameters.
     * They are invoked automatically when an object is destroyed
     * They are used to release memory and other resources
     */
    ~Account();


    /**
     * When objects are copied C++ must create a new object from an existing one. This usually happens when:
     * - We pass an object by value as a parameter
     * - We return an object by value from a function
     * - We construct one object based on another of the same class
     *
     * We can influence the copy behaviour of each class by defining a Copy constructor, otherwise the compiler will
     * provide a default way of copying objects BY COPYING THE THE VALUE OF EACH DATA MEMEBER TO THE NEW OBJECT
     *
     * This is an issue if we use pointers as data members since the memory address held in the pointer will be copied
     * BUT NOT the data that the pointer is pointing to! This will lead to having two objects with data member pointers
     * pointing to the same memory address (this is called a shallow copy)!
     */
     Account(const Account &source);

};

#endif //OPP_ACCOUNT_H
