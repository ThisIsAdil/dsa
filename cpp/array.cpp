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

void sumOfAllNumbers(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "sum of all numbers is " << sum << endl;
}

void productOfAllNumbers(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout << "product of all numbers is " << product << endl;
}

int findIndexOfNumber(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }

    return -1;
}

void swapMinAndMax(int arr[], int size)
{
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int indexOfMin, indexOfMax;

    for (int i = 0; i < size; i++)
    {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }

    indexOfMin = findIndexOfNumber(arr, size, min_val);
    indexOfMax = findIndexOfNumber(arr, size, max_val);

    swap(arr[indexOfMin], arr[indexOfMax]);

    printArray(arr, size);
}

void printUniqueValues(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                    isUnique = false;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }
    cout << endl;
}

void intersectionOfArray(int arr1[], int szOfA1, int arr2[], int szOfA2)
{
    int intersectArray[max(szOfA1, szOfA2)];
    int index = 0;

    for (int i = 0; i < szOfA1; i++)
    {
        bool isMatched = false;

        for (int j = 0; j < szOfA2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                isMatched = true;
                break;
            }
        }

        if (isMatched)
        {
            intersectArray[index] = arr1[i];
            index++;
            isMatched = false;
        }
    }

    printArray(intersectArray, index);
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
    int arr[] = {11, 8, 34, 99, 8, 99};
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
    // swapArrayElements(arr, size);

    // HOMEWORK
    // 1. WAF to calculate sum & product of all numbers in an array.
    // sumOfAllNumbers(arr, size);
    // productOfAllNumbers(arr, size);

    // 2. WAF to swap the max & min number of an array.
    // swapMinAndMax(arr, size);

    // 3. WAF to print all the unique values in an array.
    // printUniqueValues(arr, size);

    // 4. WAF to print intersection of 2 arrays.
    int arr1[] = {1, 2, 88, 3, 4, 5, 6};
    int arr2[] = {5, 6, 7, 88, 8, 9, 10};

    int szOfA1 = sizeof(arr1) / sizeof(int);
    int szOfA2 = sizeof(arr2) / sizeof(int);

    intersectionOfArray(arr1, szOfA1, arr2, szOfA2);

    return 0;
}
