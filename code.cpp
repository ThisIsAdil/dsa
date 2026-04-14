#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {75, 87, 93, 57, 88};
    double price[] = {999.99, 89.99, 39.99};

    int length = sizeof(marks) / sizeof(int);

    // for (int i = 0; i < length; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // Find Smallest & LargestNumber in Array
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int indexOfL, indexOfS;
    for (int i = 0; i < length; i++)
    {
        // smallest = min(marks[i], smallest);
        // largest = max(marks[i], largest);
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            indexOfS = i;
        }

        if (marks[i] > largest)
        {
            largest = marks[i];
            indexOfL = i;
        }
    }
    cout << smallest << " at index " << indexOfS << endl;
    cout << largest << " at index " << indexOfL << endl;

    return 0;
}