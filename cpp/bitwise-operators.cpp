#include <iostream>
using namespace std;

int decimalToBinary(int decimal)
{
    // while (decimal > 0)
    // {
    //     cout << decimal % 2 << " ";

    //     decimal /= 2;
    // }

    int answer = 0;
    int power = 1;

    while (decimal > 0)
    {
        int remainder = decimal % 2;

        answer += (remainder * power);

        power *= 10;
        decimal /= 2;
    }

    return answer;
}

int bitwiseAnd(int a, int b)
{
    // Bitwise &
    // 0 0 -> 0
    // 0 1 -> 0
    // 1 0 -> 0
    // 1 1 -> 1

    // 1 0 1
    // 1 1 1
    // -----
    // 1 0 1

    return a & b;
}

int bitwiseOr(int a, int b)
{
    // Bitwise |
    // 0 0 -> 0
    // 0 1 -> 1
    // 1 0 -> 1
    // 1 1 -> 1

    // 1 0 1
    // 1 1 1
    // -----
    // 1 1 1

    return a | b;
}

int bitwiseXor(int a, int b)
{
    // Exclusive OR (equal -> 0, different -> 1)

    // Bitwise ^
    // 0 0 -> 0
    // 0 1 -> 1
    // 1 0 -> 1
    // 1 1 -> 0

    // 1 0 1
    // 1 1 1
    // -----
    // 0 1 0

    return a ^ b;
}

int leftShiftOperator(int num, int shiftPosition)
{
    // num = 4 & shiftPosition = 1;
    // 1 0 0 -> 1 0 0 0

    return num << shiftPosition; // a * 2^b
}

int rightShiftOperator(int num, int shiftPosition)
{
    // num = 4 & shiftPosition = 1;
    // 1 0 0 -> 1 0

    return num >> shiftPosition; // a / 2^b
}

int main()
{
    int a = 5, b = 7; // 101, 111

    // cout << bitwiseAnd(a, b) << endl; // 101 = 5
    // cout << bitwiseOr(a, b) << endl; // 111 = 7
    // cout << bitwiseXor(a, b) << endl; // 010 = 1

    // Bitwise Operator
    // cout << leftShiftOperator(4, 1) << endl;  // 1 0 0 0 = 8
    // cout << rightShiftOperator(4, 1) << endl; // 1 0 = 2

    // Operator Precedence (Highest to Lowest)
    // 1. Postfix: () [] . ->
    // 2. Unary: ! ~ ++ -- + - * & sizeof
    // 3. Multiplicative: * / %
    // 4. Additive: + -
    // 5. Shift: << >>
    // 6. Relational: < > <= >=
    // 7. Equality: == !=
    // 8. Bitwise AND: &
    // 9. Bitwise XOR: ^
    // 10. Bitwise OR: |
    // 11. Logical AND: &&
    // 12. Logical OR: ||
    // 13. Assignment: = += -= *= /= etc.
    // cout << "Example: 5 + 3 * 2 = " << (5 + 3 * 2) << endl;   // 11 (not 16)
    // cout << "Example: 2 << 1 + 1 = " << (2 << 1 + 1) << endl; // 8 (shift executes after +)

    // SCOPE

    // Datatypes Modifiers
    // cout << sizeof(long int) << endl; // 8 bytes
    // cout << sizeof(short int) << endl; // 2 bytes
    // cout << sizeof(long long) << endl; // 8 bytes
    // signed int s = 10;    // by default everything is signed
    // unsigned int u = -10; // unsigned variable can't be negative and always treated as positive

    // cout << s << endl; // 10
    // cout << u << endl; // 4294967286

    // HOME WORK
    // 1. Figure out how to find if a number is power of 2 without any loop (can be done using bits)
    int num;
    cout << "enter a number: ";
    cin >> num;

    // if ((num & num - 1) == 0)
    //     cout << num << " is a power of two" << endl;
    // else
    //     cout << num << " is not a power of two" << endl;

    // 2. Write a Function to reverse an interger n

    int revNum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num /= 10;
    }
    cout << revNum << endl;

    return 0;
}
