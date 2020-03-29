#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>


using namespace std;
/**
 * We use pointers to:
 * - Access variables inside functions that were defined outside the function. Since those variables are not in scope,
 *   they cannot be accessed by their name.
 *
 * - Allocate memory dynamically on the heap or free store.
 *
 * - To achieve polymorphish in Object Oriented programming in C++
 *
 * - To access specific addresses in memory. This is useful in embedded systems and systems applications.
 *
 *  NOTE: the asterisk syntax is used both to DECLARE a pointer and DEREFERENCE a pointer!!!
 *
 *  WHEN TO USE POINTERS VS. REFERENCES PARAMETERS:
 *  - Pass by value when the parameter is small and efficient to copy such as for 'primitive' types (int, char, double, etc).
 *    Vectors, strings and other objects are more expensive and should be avoided if we don't need the function to modify the
 *    passed parameter.
 *
 *  - Pass-by-reference using pointer when the function DOES modify the actual parameter AND the parameter is expensive to copy
 *
 *  - Pass-by-reference using pointer using const when the function does NOT modify the actual parameter AND the parameter is
 *    expensive to copy AND the
 */

int* dynamic_memory_allocation(int val);
void section_1();
void arrays_vs_pointers();
void const_and_pointers();
void double_data(int *int_ptr);
void swap(int &a, int &b);
void swap_ptr(int *a, int *b);
int *create_array(size_t size, int init_val = 0);
int* apply_all(const int arr_a[], size_t sz_arr_a, const int arr_b[], size_t sz_arr_b);

int main() {
    bool section1 = false;
    bool section2 = false;
    bool section3 = false;
    bool section4 = false;
    bool section5 = false;
    bool section6 = false;
    bool sectionChallenge = true;

    // We declare pointers by using the asterisk notation:
    // We should always initialize the pointers to the nullptr otherwise it contains garbage data
    // that may reference memory outside the current program. By ausing nullptr, we make the pointer point to 'nowhere'
    // rather than 'anywhere!!

    if (section1 == true) {
        section_1();

    }
    if (section2 == true) {
        int *int_ptr = dynamic_memory_allocation(100);
        cout << " (OUTSIDE) The value of int_ptr is: " << int_ptr << endl;

        cout << " (OUTSIDE) The value that int_ptr is initially pointing to is: " << *int_ptr << endl;

        // IMPORTANT: We should always delete the pointer allocated on the heap after we are done with in order
        // to release the memory and avoid memory leaks!!!
        delete int_ptr;

    }

    if (section3) {
        arrays_vs_pointers();
    }

    if (section4) {
        const_and_pointers();
    }

    if (section5) {
        int value {10};
        cout << "value = " << value << endl;
        double_data(&value);
        cout << "value = " << value << endl;

        int *int_ptr = &value;
        double_data(int_ptr);
        cout << "value = " << value << ", *int_ptr = " << *int_ptr << endl << endl;
    }

    if (section6) {
        int a = 10;
        int b = 20;
        cout << "Before swap: a = " << a << ", b = " << b << endl;
        swap(a, b);
        cout << "After swap: a = " << a << ", b = " << b << endl;
        swap_ptr(&a, &b);
        cout << "After 2nd swap: a = " << a << ", b = " << b << endl;
    }

    if (sectionChallenge) {
        int arr_a[] {1, 2, 3, 4, 5};
        int arr_b[] {10, 20, 30};

        int arr_a_sz = 5;
        int arr_b_sz = 3;

        int *int_ptr = apply_all(arr_a, arr_a_sz, arr_b, arr_b_sz);

        for (size_t i = 0; i < arr_a_sz * arr_b_sz; i++) {
            cout << *(int_ptr + i) << ",";
        }
        cout << endl;

        delete [] int_ptr;
    }
    return 0;
}

void section_1() {
    int *int_ptr;

    int num {10};
    int num2 {20};

    cout << "Value of num is: " << num << endl;
    cout << "sizeof num is: " << sizeof num << endl;
    cout << "Address of num is:" << &num << endl << endl;

    cout << "Address of int_ptr is:" << &int_ptr << endl;
    cout << "GRABAGE Value of int_tr is: " << int_ptr << endl;
    int_ptr = nullptr;
    cout << "Value of int_tr after nullptr assignment is: " << int_ptr << endl;
    int_ptr = &num;
    cout << "Value of int_tr after &num assignment is: " << int_ptr << endl;
    cout << "sizeof int_tr is: " << sizeof int_ptr << endl;
    cout << "int_tr points to value: " << *int_ptr << endl << endl << endl;

    vector<string> *str_ptr {nullptr};
    vector<string> str_vec {};
    cout << "sizeof of str_ptr is: " << sizeof str_ptr << endl;

    str_ptr = &str_vec;

    // Notice that the two different syntax ways to call methods belonging to objects that the pointer is pointing to:
    str_ptr->push_back("First value");
    (*str_ptr).push_back("Second value");
    cout << "The first value is: " << str_ptr->at(0) << " and the second value is: " << (*str_ptr).at(1) << endl << endl;

    for (auto val: *str_ptr) {
        cout << val << ",";
    }
    cout << endl << endl;

    // we can change the pointer to point to a different variable:
    int_ptr = &num2;
    cout << "Now, int_ptr has value " << int_ptr << " which points to: " << *int_ptr << endl;

    // we can also change the value of a variable indirectly, by changing the value stored in the memory address of
    // that the pointer is pointing to:
    *int_ptr = 1000;
    cout << "Now, int_ptr has value " << int_ptr << " which points to: " << *int_ptr << " and num2 is has value: " << num2 << endl << endl;
}

int* dynamic_memory_allocation(int val) {
   /**
    * pointers can be used to allocate dynamic memory from the heap at runtime. To do this, we we use the 'new' syntax.
    */
    int *int_ptr {nullptr};
    int_ptr = new int; // now its allocated on the heap and it contains garbage data.
    cout << " (INSIDE) The value of int_ptr is: " << int_ptr << endl;

    cout << " (INSIDE) The value that int_ptr is initially pointing to is: " << *int_ptr << endl;

    // assign the value to the pointer:
    *int_ptr = val;
    cout << " (INSIDE) After assignment, the value that int_ptr is pointing to is: " << *int_ptr << endl << endl;

    return int_ptr;
}

void arrays_vs_pointers() {
    int scores[] {100, 95, 88};

    // An array stores the address of the first element of that array:
    cout << "scores value:" << scores << endl;
    // We can access elements in an array using ARRAY SUBSCRIPT NOTATION:
    cout << "ARRAY SUBSCRIPT NOTATION:" << endl;
    cout << "scores[0] = " << scores[0] << endl;
    cout << "scores[1] = " << scores[1] << endl << endl;

    int *scores_ptr = {scores}; // we don't need the & prefix on scores array since an array already stores a memory address
    cout << "POINTER OFFSET NOTATION:" << endl;
    cout << "scores_ptr value:" << scores_ptr << endl;
    // We can access elements in an array using POINTER OFFSET NOTATION:
    cout << "*scores_ptr = " << *scores_ptr << endl;
    cout << "*(scores_ptr +1) = " << *(scores_ptr + 1) << endl << endl; // The '+' operator here is overloaded and it adds n * size

    // We can access elements in an array using POINTER SUBSCRIPT NOTATION:
    cout << "POINTER SUBSCRIPT NOTATION:" << endl;
    cout << "scores_ptr[0] = " << scores_ptr[0] << endl;
    cout << "scores_ptr[1] = " << scores_ptr[1] << endl << endl;

    // since an array just stores a point in memory, it is nothing more than a pointer, so we can use ARRAY OFFSET NOTATION:
    cout << "ARRAY OFFSET NOTATION:" << endl;
    cout << "*scores = " << *scores << endl;
    cout << "*(scores + 1) = " << *(scores + 1) << endl << endl;

}

void const_and_pointers() {
    /**
     * There are different ways in which we can use 'const' with pointers. We can declare:
     * - Pointers to constants
     * - Constant pointers
     * - Constant pointers to constants
     */

    int high_score {100};
    int low_score {65};
    // When a pointer points to a constant, the data that it points to CANNOT change.
    // The pointer itself can change and point to another memory address.
    const int *score_ptr {&high_score};

//    *score_ptr = 95; // ERROR: read-only variable is not assignable
    score_ptr = {&low_score}; // OK!

    // Constant pointers cannot be changed to point to another memory address.
    // They data that it is stored in the memory address they point to can be changed though.
    int *const score_ptr_2 {&high_score};
    *score_ptr_2 = 5; // OK!
//    score_ptr_2 = &low_score; // ERROR: cannot assign to variable 'score_ptr_2' with const-qualified type 'int *const'

// Constant pointers to constants cannot not change neither their memory address nor the data that they hold.
    const int *const score_ptr_3 {&low_score};
//    *score_ptr_3 = 10; // ERROR: read-only variable is not assignable
//    score_ptr_3 = &high_score // ERROR: cannot assign to variable 'score_ptr_3' with const-qualified type 'const int *const'
}

void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "temp = " << temp << endl;
}

void swap_ptr(int *a, int *b) {
    int *temp {nullptr};
    temp = a;
    *a = *b;
    *b = *temp;
}

void display (const vector<string> *const v) {
    for (auto str : *v) {
        cout << str << " ";
    }
    cout << endl;
}

int *create_array(size_t size, int init_val) {
    int *new_storage {nullptr};
    new_storage = new int[size];

    for (size_t i {0}; i < size; i++) {
        *(new_storage + i) = init_val;
    }

    return new_storage;
}

int* apply_all(const int const arr_a[], size_t sz_arr_a, const int arr_b[], size_t sz_arr_b) {
    int *int_ptr = new int[sz_arr_a * sz_arr_b];

    size_t cum = 0;
    for (size_t j {0}; j < sz_arr_b; j++) {
        for (size_t i {0}; i < sz_arr_a; i++) {
            *(int_ptr + cum++) = arr_a[i] * arr_b[j];
        }
    }
    return int_ptr;
}


