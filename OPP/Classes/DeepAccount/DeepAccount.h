//
// Created by Κωνσταντινος Μορφακης on 25/03/2020.
//

#ifndef OPP_DEEPACCOUNT_H
#define OPP_DEEPACCOUNT_H


class DeepAccount {
    double *balance;

public:
    double get_balance() const;
    void set_balance(double d);

    DeepAccount(double d);
    DeepAccount(const DeepAccount &source);

    /**
     * A move constructor is defined similar to a Copy constructor but using a r-value reference (denoted by
     * the '&&' syntax) instead of an l-value reference (denoted by the '&' syntax)/
     *
     * Move constructors are useful whenever object instantiation happens as part of an r-value assignment e.g.
     * when we create an Object and immediately push it in a vector. In that case, the created object is an r-value
     * as it is never assigned to a variable and it is not addressable.
     *
     * deep_account_vector.push_back(DeepAccount {10}).
     *
     * In such cases, if a Move constructor is not defined, the Copy constructor is called behind the scenes. This
     * can be expensive in cases where deep copy happens when the Object is copied to be passed by value as a parameter.
     */
    DeepAccount (DeepAccount &&source);
    ~DeepAccount();
};


#endif //OPP_DEEPACCOUNT_H
