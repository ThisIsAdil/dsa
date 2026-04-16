#include <iostream>
using namespace std;

int sum(int a, int b) // here a, b are parameters
{
    return a + b;
}

int minNum(int a, int b)
{
    return a < b ? a : b;
}

int nNumbersSum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    };

    return sum;
}

int factorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int digitSum(int number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int nCr(int n, int r)
{
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nmr = factorial(n - r);

    return factorial_n / (factorial_r * factorial_nmr);
}

void primeNumber(int n)
{
    bool isPrime = true;

    if (n == 1)
    {
        cout << "1 is not a prime number because it only has one factor, which is itself.";
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
            }
        };

        isPrime ? cout << "prime number" : cout << "non-prime number";
    }
};

void printPrimeNumbers(int n)
{

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        };

        isPrime ? cout << i << " " : cout << "";
    }
};

void fibonacci(int n)
{
    int firstNum = 0, secondNum = 1;

    while (firstNum <= n)
    {
        cout << firstNum << ", ";

        int thirdNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = thirdNum;
    }
};

int main()
{
    // cout << sum(10, 5) << endl; // here 10, 5 are arguments
    // cout << minNum(10, 5) << endl;

    // cout << nNumbersSum(5) << endl;
    // cout << nNumbersSum(10) << endl;

    // cout << factorial(4) << endl;
    // cout << factorial(5) << endl;

    // cout << digitSum(1234) << endl;

    // cout << nCr(6, 3) << endl;

    // Home Work
    // WAF to check if a number is prime or not.
    // primeNumber(7);

    // WAF to print all prime numbers from 1 to N.
    // printPrimeNumbers(100);

    // WAF to print nth Fibonacci.
    // fibonacci(100);

    // learn switch case statement
    char ch = 'C';

    switch (ch)
    {
    case 'A':
        cout << "character is A";
        break; // break is not added below all statements will execute till there is no break including default statement

    case 'B':
        cout << "character is B";
        break;

    case 'C':
        cout << "character is C";
        break;

    case 'D':
        cout << "character is D";
        break;

    default:
        cout << "character is neither A,B,C,D";
        break;
    }

    return 0;
}