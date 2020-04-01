#include <iostream>

/**
 *  We can use overloading to define how C++ operators (such as +, -, /, *, ++, etc.) will behave for objects created
 *  from our user-defined classes.
 *
 * The only operators that CAN NOT be overloaded are the following: [ ::, :?, .*, . , sizeof ]
 * Some further rules are:
 * - Precedence and Associativity CAN NOT be changed
 * - 'arity' CANNOT be changed (e.g. can't make the division operator unary instead of binary)
 * - Operators CANNOT be overloaded for primitive types (e.g. int, double,  char, etc.)
 * - New Operators CANNOT be created
 * - [], (), ->, = MUST be declared as member methods
 * - Other operators can be declared as member methods or global functions
 */


#include "Mystring.h"

int main() {

    Mystring empty;
    Mystring morf {"Morf"};
    Mystring morf_copy {morf};


    empty.display();
    morf.display();
    morf_copy.display();

    Mystring con {"Con"};

//    Mystring conMorf = con + morf;
    bool a =  morf == morf_copy;
    std::cout << "Are they equal: " << a << std::endl;

    std::cout << morf << ", " << morf_copy;
    return 0;
}

/**
 * We can also overload non-member, global functions (instead of class member methods).
 * Note that we CANNOT overload an operator both as a non-member global function and as a member
 * class method because the compiler would not know which one to call.
 *
 * Finally, if we do not define getter methods for private properties, we need to declare the
 * overloaded methods as 'friend' functions in the class definition so that they have access to
 * the private properties.
 */

Mystring operator+(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(obj.str, buff);

    for (size_t i {0}; i < std::strlen(buff); i++) {
        buff[i] = std::toupper(buff[i]);
    }

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    bool res = std::strcmp(lhs.str, rhs.str) == 0;
    return res;
}


std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
    os << obj.str;
    return os;
}

