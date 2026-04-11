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

int binaryToDecimal(int binary)
{
    int answer = 0, power = 1;

    while (binary > 0)
    {
        int remainder = binary % 2;

        answer += (remainder * power);

        power *= 2;
        binary /= 10;
    }

    return answer;
}

int main()
{
    cout << decimalToBinary(23) << endl;
    cout << binaryToDecimal(1100101) << endl;

    return 0;
}