//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//

#ifndef OPP_SHALLOWACCOUNT_H
#define OPP_SHALLOWACCOUNT_H


class ShallowAccount {
    double *balance;

public:
    double get_balance();
    void set_balance(double d);

    ShallowAccount(double d);
    ShallowAccount(const ShallowAccount &source);
    ~ShallowAccount();
};


#endif //OPP_SHALLOWACCOUNT_H
