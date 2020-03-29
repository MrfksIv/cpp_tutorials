#include <iostream>
#include <string>
#include <vector>
#include "DeepAccount.h"
#include "ShallowAccount.h"
#include "Account.h"


using namespace std;

void section1();
void section2();
void section3();
void section4();
void section5();
void section6();
void print_account_summary(Account account);

class Player {
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string);
    bool is_dead();
};

class Account2 {
private:
    double balance;

public:
    // from C++ 11 we are allowed to give 'default' values to attributes from the class definition
    string name {"Account"};

    // Methods can be implemented inline, inside the class declaration:
    double get_balance() {
        return balance;
    }

    void set_balance(double);
    bool deposit(double);
    bool withdraw(double);
};

// Usually methods are implemented outside the class declaration
void Account2::set_balance(double new_balance) {
    balance = new_balance;
}

int main() {
    bool section_1 = false;
    bool section_2 = false;
    bool section_3 = false;
    bool section_4 = false;
    bool section_5 = false;
    bool section_6 = true;

    if (section_1) {
        section1();
    }

    if (section_2) {
        section2();
    }

    if (section_3) {
        section3();
    }

    if (section_4) {
        section4();
    }

    if (section_5) {
        section5();
    }
    if (section_6) {
        section6();
    }

    return 0;
}

void section1() {
    // In C++ we can instantiate class objects using the same syntax as for primitive types
    Player frank;
    Player hero;


    // We can add the instantiated objjects to arrays
    Player players[] {frank, hero};

    // or vectors
    vector<Player> players_vec {frank};
    players_vec.push_back(hero);

    // We only use the 'new' keyword to instantiate an object on the heap:
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;
}

void section2() {

    // This is how we access properties to objects:
    Account frank_account;
//    frank_account.balance = 1000; // <- Not accessible since it was declared as private
    frank_account.name = "Frank's account";

    Account *hero_account {nullptr};
    hero_account = new Account;

    // There are two ways to access properties of pointer objects:
//    hero_account->balance = 1000; // <- Not accessible since it was declared as private
    (*hero_account).name = "Hero Account";

    delete hero_account;

}

void section3() {
    /**
     * We can instantiate objects using different ways:
     */
    Account account1  {"account1", 100};

    Account account2 = Account("account2", 200);

    Account account3 {"name only"};

    Account account4;
}

void section4() {
    Account account1  {"account1", 100};
    /**
     * This is an example where a copy constructor is used. This is because the function below
     * takes a parameter by value:
     */
     print_account_summary(account1);

     /**
      * We can also call the Copy constructor directly:
      */

     Account account2 {account1};
}

void print_account_summary(Account account) {
    cout << "----------------- \n Balance: " << account.get_balance() << "\n ------------------" << endl;
}


void section5() {
    ShallowAccount shallow {10.5};
    ShallowAccount shallowCopy {shallow};

    cout << "shallow balance: " << shallow.get_balance() << endl;
//    cout << "shallowCopy balance: " << shallowCopy.get_balance() << endl;

    /**
     * NOTICE THAT NOW BECAUSE OUR COPY CONSTRUCTOR IS THE DEFAULT SHALLOW-COPY CONSTRUCTOR
     * THE FUNCTION BELOW CHANGES THE BALANCE OF BOTH ACCOUNTS
     */
    //
    shallow.set_balance(1000.2);

    cout << "shallow balance: " << shallow.get_balance() << endl;
//    cout << "shallowCopy balance: " << shallowCopy.get_balance() << endl;

    DeepAccount deep {20};
    DeepAccount deepCopy{deep};

    cout << "deep balance: " << deep.get_balance() << endl;
    cout << "deepCopy balance: " << deepCopy.get_balance() << endl;

    deep.set_balance(1000.2);

    cout << "deep balance: " << deep.get_balance() << endl;
    cout << "deepCopy balance: " << deepCopy.get_balance() << endl;

}

void section6() {
    vector<DeepAccount> vec {};
    vec.push_back(DeepAccount {10});
}
