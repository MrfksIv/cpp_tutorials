

/**
 *
 * WHAT ARE STREAMS?
 * Writing an I/O library for any Programming Language is a very complex task as it needs to consider
 * different kinds of physical devices (e.g. Hard-disks, the keyboard) and also virtual devices (e.g. web-servers).
 *
 * A Stream is an interface/abstraction that allows the programmer to send and receive data to all these devices
 * without having to worry about the actual device and its drivers.
 * A Stream is in essence a sequence of bytes.
 *
 * The most Common header files related to streams are the following:
 * - iostream:  Provides definitions for formatted input and output from/to streams
 * - fstream:   Provides definitions for formatted input and output from/to FILE streams
 * - iomanp:    Provides definitions for manipulators used to format stream I/O
 *
 * These header files give us access to these commonly used stream classes:
 * - ios:       Provides basic support for formatted and unformatted I/O operations. It is a base class for most of the others
 * - ifstream:  Provides high-level input operations for file based streams
 * - ofstream:  Provides high-level output operations for file based streams
 * - fstream:   Derived for ofstream and ifstream
 * - stringstream: Providfes high-level I/O operations on memory based strings. (Derived from istringstream & ostringstream)
 *
 * Global Stream Objects:
 * These are global objects that initialized before main() starts to execute. They can be accessed by including <iostream>
 * - cin:       Instance of istream class and is by default connected to the keyboard
 * - cout:      Instance of ostream class and is by default connected to the console
 * - cerr:      By default connected to the console and they are unbuffered
 * - clog:      By default connected to the console and they are unbuffered
 *
 * USEFUL STREAM MANIPULATORS
 * These are useful member function to control formatting. They can be used on input & output streams
 * To use them we need to include <iomanip>.
 * They can be used both as member functions or as manipulators:
 *  std::cout.width(10)             <- member function
 *  std::cout  << std::setw(10)     <- manipulator
 * READING/WRITING TEXT FILES
 *
 * USE STRING STREAMS
 */

#include <iostream>
#include <iomanip>

int main() {

    // By default boolean values are output as 1 or 0:
    std::cout << (10 == 11) << std::endl;

    std::cout << std::boolalpha; // now all further boolean output will be affected
    std::cout << (10 == 11) << std::endl;

    std::cout << std::noboolalpha; // and change it back
    std::cout << (10 == 11) << std::endl;

    // We can also use the setf method:
    std::cout.setf(std::ios::boolalpha);
    std::cout << (10 == 11) << std::endl;

    // and reset to default behaviour:
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << (10 == 11) << std::endl;

    return 0;
}
