#include <iostream>
/**
 * POLYMORPHISM
 *
 * We have already seen and used Polymorphism when we overloaded methods and operators.
 * These are instances of COMPILE-TIME POLYMORPHISM also called EARLY-BINDING / STATIC-BINDING POLYMORPHISM.
 * In these cases, the compiler takes care of the polymorphism (overloading in this case) BEFORE the program runs.
 *
 * There exists another type of polymorphism called RUNTIME / LATE-BINDING / DYNAMIC-BINDING.
 * In this type of polymorphism, the association of what the programmer wants to do, with how to do it, happens
 * at RUNTIME.
 * RUNTIME POLYMORPHISM is achieved by OVERRIDING VIRTUAL functions (called 'abstract' in other languages) and using
 * inheritance.
 *
 * Consider the example below:
 * ------------------------------------------------------------------------------------------------------------------
 * Account a;
 * a.withdraw(10);
 *
 * Trust t; // Trust extends the Account class
 * t.withdraw(10); // and overloads the Account class' withdraw method
 *
 * Account *p = new Trust(); // This is valid since Trust extends from Account
 * p->withdraw(1000)         // PROBLEM: Due to static binding, this will call the withdraw of Account since the compiler
 *                           // has an Account type for p! This is NOT what we want. Dynamic binding solves this problem.
 *
 * The same problem occurs in the case below. If all account types are derived from Account, the function below
 * can be used for all of them. However, due to static binding, the compiler will ALWAYS call the .display() method
 * of the Account class even though a different kind of account was passed as an argument to the function call.
 *
 * void display_account(const Account &acc) {
 *     acc.display();
 * }
 *
 * To use dynamic polymorphism we need to declare the withdraw() and display() methods of the base Account class as
 * 'virtual' methods. The virtual keyword tells the compiler to NOT bind the call at compile time but rather defer it
 * for runtime.
 * ------------------------------------------------------------------------------------------------------------------
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
