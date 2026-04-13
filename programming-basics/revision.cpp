#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World" << endl;
    cout << "Adil\nShaikh" << "\n"; // slightly more faster

    // 8 bits --> 1 byte
    int num = 0;              // 4 bytes --> 32 bits
    char alphabet = 'A';      // 1 byte --> 4 bit (they are stored in ASCII values)
    float PI = 3.14;          // 4 bytes
    bool isPermisible = true; // 1 byte
    double bigNum = 100.99;   // 8 bytes

    cout << sizeof(num) << endl;

    // Type Conversion - Implicit (Easy & Happens Automatically)
    // Type Casting - Explicit (Done by the Programmer)

    // cin - used for taking input

    // Arithmatic Operators (+,-,*,/,%)
    // Relational Operators (<, <=, ==, >=, >, !=) -> returns true/false
    // Logical Operators (||, &&, !)
    // Uniary Operators (++, --)

    // Conditional Statements (if, else, if-else, if else-if else)

    // Ternary Statement (condition? statement 1 : statement 2)

    // While Loop, For Loop, Do While Loop
    // Always Avoid INFINITE LOOP

        return 0;
}