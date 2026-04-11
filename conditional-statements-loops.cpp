#include <iostream>
using namespace std;

int main()
{
    // int n;

    // cout << "enter any number: ";
    // cin >> n;

    // if (n > 0)
    // {
    //     cout << "you have entered positive number\n";
    // }
    // else
    // {
    //     cout << "you have entered negetive number\n";
    // }

    // if (n % 2 == 0)
    // {
    //     cout << "you have entered a even number \n";
    // }
    // else
    // {
    //     cout << "you have entered a odd number \n";
    // }

    // int age;
    // cout << "enter your age: ";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "you can vote\n";
    // }
    // else
    // {
    //     cout << "you can't vote\n";
    // }

    // int marks;

    // cout << "enter your marks: ";
    // cin >> marks;

    // if (marks >= 90)
    // {
    //     cout << "A\n";
    // }
    // else if (marks >= 80 && marks < 90)
    // {
    //     cout << "B\n";
    // }
    // else
    // {
    //     cout << "C\n";
    // }

    // char ch;

    // cout << "enter a alphabet: ";
    // cin >> ch;

    // if (ch >= 65 && ch <= 90)
    // {
    //     cout << "uppercase\n";
    // }
    // else if (ch >= 97 && ch <= 122)
    // {
    //     cout << "lowercase\n";
    // }

    // int count = 1;

    // while (count <= 5)
    // {
    //     cout << count << " ";
    //     count++;
    // }

    // int n = 10, sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;

    //     if (i == 5)
    //     {
    //         break;
    //     };
    // }

    // cout << sum << endl;

    // int n = 6, sumOfOddNumbers = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {

    //         sumOfOddNumbers += i;
    //     }
    // }

    // cout << sumOfOddNumbers << endl;

    // int number = 7;
    // bool isPrime = true;

    // for (int i = 2; i * i <= number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         cout << number << " is a non-prime number\n";
    //         isPrime = false;
    //         break;
    //     }
    // };

    // if (isPrime)
    // {
    //     cout << number << " is a prime number\n";
    // }

    // int row = 5;
    // int column = 5;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Home Work
    // Q.1 Sum of all numbers from 1 to N which are divisible by 3
    int n = 12, sumOfNumbers = 0;

    for (int i = 3; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sumOfNumbers += i;
        }
    }

    cout << sumOfNumbers << endl;

    // Q.2 Print factorial of a number N
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}