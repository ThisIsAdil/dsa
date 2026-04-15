#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void changeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

void reverseArray(int arr[], int size)
{
    int revArr[size];
    for (int i = size; i > 0; i--)
    {
        revArr[size - i] = arr[i - 1];
    }

    printArray(revArr, size);
}

void swapArrayElements(int arr[], int size)
{
    // for (int i = size; i > 0 + (size / 2); i--)
    // {
    //     swap(arr[i - 1], arr[size - i]);
    // }

    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    printArray(arr, size);
}

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
    // cout << smallest << " at index " << indexOfS << endl;
    // cout << largest << " at index " << indexOfL << endl;

    // Pass by Reference
    int arr[] = {11, 34, 99, 8};
    int size = sizeof(arr) / sizeof(int);

    // changeArray(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        // cout << arr[i] << " ";
    }

    // cout << endl;

    // Linear Search
    // cout << linearSearch(arr, 3, 99) << endl; // O(n)

    // Reverse an Array
    // reverseArray(arr, 3);

    // Reverse an Array using swap
    swapArrayElements(arr, size);

    // HOMEWORK

    // 1. WAF to calculate sum & product of all numbers in an array.

    // 2. WAF to swap the max & min number of an array.

    // 3. WAF to print all the unique values in an array.

    // 4. WAF to print intersection of 2 arrays.

    return 0;
}
