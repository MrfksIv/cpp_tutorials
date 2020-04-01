//
// Created by Κωνσταντινος Μορφακης on 29/03/2020.
//

#ifndef OPERATOR_OVERLOADING_MYSTRING_H
#define OPERATOR_OVERLOADING_MYSTRING_H


class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &obj);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);

private:
    char *str;

public:
    Mystring();                         // No-args constructor
    Mystring(const char *s);            // Overloaded constructor
    Mystring(const Mystring &source);   // Copy constructor
    Mystring(Mystring &&source);  // Move constructor
    ~Mystring();                        // Destructor

    void display() const;
    int get_length() const;
    const char *get_str() const;

    /**
     * If we want to use the assignment operator to copy one string to another we need to overload it.
     * This is because by default, the assignment operator will perform a shallow copy and as a result the 'copied'
     * new Mystring object will have its .str member pointing to the same memory address as of the original string:
     *      Mystring s1 {"Morf"}
     *      Mystring s2 = s1   <- Now s2.str points to the same memory address as s1.str
     *
     * If we want to perform a deep copy using the assignment operator, we need to overload it using the syntax:
     * [Type] [Type]::operator[operator](const [Type] &rhs) where [operator] is the operator symbol we want to overload
     * (in this case '=') and [Type] is the name of the class.
     *
     * After the overloading, whenever we call:
     *      s2 = s1
     * This will be called instead:
     *      s2.operator=(s1)
     */

    Mystring operator=(const Mystring &rhs);
    Mystring operator=(Mystring &&rhs);

    /**
     * Suppose we want to overload the unary operator '-' (minus) so that it converts any upper-case characters in a
     * Mystring to lowercase:
     */

    Mystring operator-();

    /**
     * We can also overload the comparison operator '==' to make sure that this compares the characters that are stored
     * in the memory addresses pointed to by *str instead of the memory addresses of were each Mystring object is located
     */
//    bool operator==(const Mystring &rhs) const;


    /**
     * Uncomment below and comment the operator+ overload in the ma
     */
//     Mystring operator+(const Mystring &rhs) const;
};


#endif //OPERATOR_OVERLOADING_MYSTRING_H
