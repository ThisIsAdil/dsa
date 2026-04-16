#include <iostream>
using namespace std;

int main()
{
    // Sqaure Pattern
    // int n = 3;

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << "  ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Home Work
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Triangle Pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }

    // // Home Work
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }

    // Reverse Triangle Pattern
    // int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i - j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Home Work
    // A
    // B A
    // C B A
    // D C B A

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = i; j >= 0; j--)
    //     {
    //         char newCh = ch + j;
    //         cout << newCh;
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle Pattern
    // int n = 4;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << num++ << " ";
    //     }
    //     cout << endl;
    // }

    // Home Work
    // A
    // B C
    // D E F
    // G H I J

    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << ch++;
    //     }
    //     cout << endl;
    // }

    // Inverted Triangle Pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int spaces = 0; spaces < i; spaces++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = n - i; j > 0; j--)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // Home Work
    // A A A A
    //   B B B
    //     C C
    //       D

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';

    //     // print spaces
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << " ";
    //     }

    //     // print character
    //     ch += i;
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << ch;
    //     }

    //     cout << endl;
    // }

    // Pyramid Pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int spaces = n - 1; spaces > i; spaces--)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }

    //     for (int k = i; k > 0; k--)
    //     {
    //         cout << k << " ";
    //     }

    //     cout << endl;
    // }

    // Hollow Diamond Pattern
    int n = 4;

    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    // for (int i = 0; i < n; i++)
    // {
    //     // print spaces n - i - 1
    //     for (int j = n - i - 1; j > 0; j--)
    //     {
    //         cout << " ";
    //     }

    //     // print "*"
    //     cout << "*";

    //     // print spaces
    //     for (int j = i * 2 - 1; j > 0; j--)
    //     {
    //         cout << " ";
    //     }

    //     if (i != 0)
    //     {
    //         // print "*"
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for (int i = n - 1; i > 0; i--)
    // {
    //     // print spaces
    //     for (int j = n - i; j > 0; j--)
    //     {
    //         cout << " ";
    //     }

    //     // print "*"
    //     cout << "*";

    //     // print spaces
    //     for (int j = i * 2 - 3; j > 0; j--)
    //     {
    //         cout << " ";
    //     }

    //     if (i != 1)
    //     {
    //         // print "*"
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Home Work
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = n + 2 - i * 2; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = n + 2 - i * 2; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}