#include "iostream"
using namespace std;

int main()
{
    // output in C++
    cout << "Hello World!" << "\n";
    cout << "Adil\nShaikh" << endl;

    // primitive datatypes in C++
    int age = 18;
    char grade = 'A';
    float PI = 3.14f;
    bool isThisCppProgram = true;
    double price = 100.99;

    cout << sizeof(age) << " bytes is size of age which is " << age << endl;
    cout << sizeof(grade) << " byte is size of grade which is " << grade << endl;
    cout << sizeof(PI) << " bytes is size of PI which is " << PI << endl;
    cout << sizeof(isThisCppProgram) << " byte is size of isThisCppProgram which is " << isThisCppProgram << endl;
    cout << sizeof(price) << " bytes is size of price which is " << price << endl;

    // type casting in C++
    char character = 'A';
    int integer = character; // ascii value of A is 65 therefore 65 will be the out of integer value

    cout << integer << endl;

    int newPrice = (int)price;
    cout << newPrice << endl;

    // input in C++
    int userAge; // as we have not declared value of userAge by default garbage value is present in userAge

    cout << "enter your age: ";
    cin >> userAge;

    cout << "user's age is " << userAge << endl;

    // Operators:
    // - Arithmetic
    int a = 10, b = 5;

    cout << "sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "multiplication = " << (a * b) << endl;
    cout << "quotent = " << (a / b) << endl;
    cout << "remainder = " << (a % b) << endl;

    // - relational
    cout << "is a is equal to b - " << (a == b) << endl;
    cout << "is a is not equal to b - " << (a != b) << endl;
    cout << "is a is less than b - " << (a < b) << endl;
    cout << "is a is less than equal to b - " << (a <= b) << endl;
    cout << "is a is greater than b - " << (a > b) << endl;
    cout << "is a is greater than equal to b - " << (a >= b) << endl;

    // - logical
    cout << "is a or b are greater than 7 - " << (a || b > 7) << endl;
    cout << "is a and b both are greater than 7 - " << (a && b > 7) << endl;
    cout << "is not a is greater than 7 - " << !(a > 7) << endl;

    // sum of 2 numbers
    int x, y;

    cout << "enter value of x: ";
    cin >> x;
    cout << "enter value of y: ";
    cin >> y;

    cout << "sum of 2 numbers is " << x + y << endl;

    // Homework - build a calculator which can perform addition, substraction, multiplication, division & remainder

    // user should be able to enter 2 numbers
    int num1, num2;
    cout << "enter value of num1: ";
    cin >> num1;
    cout << "enter value of num2: ";
    cin >> num2;

    // 1. Addition
    cout << "sum of 2 numbers is " << num1 + num2 << endl;

    // 2. Subtraction
    cout << "difference of 2 numbers is " << num1 - num2 << endl;

    // 3. Multiplication
    cout << "product of 2 numbers is " << num1 * num2 << endl;

    // 4. Division
    cout << "quotient of 2 numbers is " << num1 / num2 << endl;

    // 5. Remainder
    cout << "remainder of 2 numbers is " << num1 % num2 << endl;

    return 0;
}