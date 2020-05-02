/**
 * SMART POINTERS
 *
 * The need for smart pointers arose due to the issues of regular pointers.
 * The flexibility that comes with raw pointers also brings the added complexity of memory allocation,
 * deallocation and lifetime management.
 * This makes most defects in C++ be pointer related defects. Some of which are:
 * - Memory leaks due to forgetting to deallocate memory
 * - Unitialized (wild) pointers
 * - Dangling pointers
 * - No exception safe (e.g. the system throws an exception, thus not reaching the deallocating line and leaking memory)
 * It is thus a good ides to use smart pointers wherever possible, and let C++ handle the memory management on its own.
 *
 * WHAT ARE SMART POINTERS
 * - They are objects implemented with Template Classes - they are wrappers around raw pointers
 * - They can only point to heap memory and automatically call delete when they are not needed
 * - They adhere to RAII principles (see below)
 * - To use then we need to include the <memory> header file
 * - They overloaded operators for dereference (*) and member selection (->)
 * - HOWEVER THEY DO NOT SUPPORT POINTER ARITHMETIC
 *
 * SMART POINTER TYPES
 * - Unique Pointers    (unique_ptr)
 *      - std::unique_ptr<T> creates a smart unique pointer pointing to an object of type T on the heap
 *      - It is unique: there can only be one unique_ptr<T> pointing to the object on the heap
 *      - It owns what it points to
 *      - It CANNOT be assigned or copied
 *      - It CAN be moved
 *      - When the pointer is destroyed, what it points to is also destroyed automatically.
 *
 * - Shared Pointers    (shared_ptr)
 *      - std::shared_ptr<T> creates a smart shared pointer pointing to an object of type T on the heap
 *      - It is NOT unique: there can be MANY shared_ptrs pointing to the same object on the heap
 *      - It stablishes shared ownership relationship
 *      - It CAN be assigned AND copied
 *      - It CAN be moved
 *      - It doesn't support managing arrays by default
 *      - When the use count (reference counting) is zero, the managed object on the heap is destroyed
 *
 * - Weak Pointers      (weak_ptr)
 *      - std::weak_ptr<T> creates a smart weak pointer pointing to an object of type T on the heap
 *      - It DOES NOT participate in owning relationship
 *      - It is ALWAYS created from a shared_ptr
 *      - It DOES NOT increment or decrement refernce use count
 *      - It is used to prevent strong reference cycles which could prevent objects from being deleted
 *
 * RESOURCE ACQUISITION IS INITIALIZATION (RAII)
 * This is a common idiom used in programming based on container object lifetime.
 * RAII Objects are allocated on the stack.
 *
 * Resource Acquisition Examples:
 * 1. Open a file
 * 2. Allocate memory
 * 3. Acquire a lock
 *
 * Is Initialization:
 * - The resource is acquired in the constructor
 *
 * Resource relinquishing happens in the destructor:
 * 1. Close the file
 * 2. Deallocate the memory
 * 3. Release the lock
 *
 * CUSTOM DELETERS
 * Sometimes when we want to destroy a smart pointer we also need to do more than hust destroy the object on the heap
 * C++ smart pointers allow you to provide custom deleters.
 */

#include <iostream>
#include <memory>

void unique_ptrs();
void shared_ptrs();
void weak_ptrs();

int main() {
    unique_ptrs();
    shared_ptrs();
    weak_ptrs();

    return 0;
}

void unique_ptrs() {
    // this is how we instantiate a unique pointer
    std::unique_ptr<int> ptr { new int {100}};

    std::cout << "Hello, Smart unique pointer at loc: " << ptr << " and value: " << *ptr <<  std::endl;

    *ptr = 200;
    std::cout << "Hello, Smart unique pointer at loc: " << ptr << " and value: " << *ptr <<  std::endl;

    // unique_ptr has some useful methods:
    // this is used to get a raw pointer. It is useful if we need to work with libraries that use raw pointers:
    int * raw_ptr = ptr.get();
    std::cout << "Hello, Raw pointer from unique_ptr at loc: " << raw_ptr << " and value: " << *raw_ptr <<  std::endl;

    // resets the memory address to null_ptr and releases the memory that it pointed to:
    ptr.reset();
    // THE LINE BELOW THROWS AN ERROR BECAUSE ptr nolonger exists:
//    std::cout << "Hello, Smart unique pointer after reset at loc: " << ptr << " and value: " << *ptr <<  std::endl;

    // a better way to initialize unique_ptr since c++ 14 is to use the make_unique function:
    std::unique_ptr<int> ptr2 = std::make_unique<int>(100);


    std::unique_ptr<int> ptr3;
    // THE LINE BELOW THROWS AN ERROR BECAUSE unique_ptr cannot be assigned NOR copied:
//    ptr3 = ptr2;

    // however it CAN be moved:
    ptr3 = std::move(ptr2); // ptr2 is now null and ptr3 owns the data since ownership cannot be shared
    // NO NEED TO DELETE, THIS IS HANDLED AUTOMATICALLY

}

void shared_ptrs() {
    // shared_ptrs also have two ways of being instantiated:
    std::shared_ptr<int> ptr {new int {1000}};
    std::shared_ptr<int> ptr2 {std::make_shared<int>(2000)};

    // unlike unique_ptrs ownership of an object can be shared amongst several shared_ptrs:
    std::shared_ptr<int> ptr3 {ptr};

    // we can see the use_count (i.e. the reference count of the object that is being pointed to):
    std::cout << "Use count of ptr: " << ptr.use_count() << std::endl;
    std::cout << "Use count of ptr3: " << ptr3.use_count() << std::endl;

    ptr.reset();

    std::cout << "Use count of ptr after ptr.reset(): " << ptr.use_count() << std::endl;
    std::cout << "Use count of ptr3 after ptr.reset(): " << ptr3.use_count() << std::endl;
}

void weak_ptrs() {

}
