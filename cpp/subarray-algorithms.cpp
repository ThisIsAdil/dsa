#include <iostream>
#include <vector>
using namespace std;

void printAllSubArrays(int arr[], int sz)
{
    for (int start = 0; start < sz; start++)
    {
        for (int end = start; end < sz; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }

        cout << endl;
    }
}

int printMaximumSubArrays(int arr[], int sz)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < sz; start++)
    {
        int currentSum = 0;
        for (int end = start; end < sz; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << maxSum << endl;

    return maxSum;
}

int kadanesAlgorithm(int arr[], int sz)
{
    // it's a type of Dynamic Programming
    // Most Optimized
    int currentSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < sz; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (maxSum < 0)
            maxSum = 0;
    }

    return maxSum;
}

vector<int> pairSum(int arr[], int sz, int target)
{
    vector<int> pairOfSum;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                pairOfSum.push_back(i);
                pairOfSum.push_back(j);
                break;
            }
        }
    }
    return pairOfSum;
}

vector<int> pairSumInSortedArray(int arr[], int sz, int target)
{
    vector<int> pairOfSum;

    int start = 0, end = sz - 1;

    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            pairOfSum.push_back(start);
            pairOfSum.push_back(end);
            break;
        }
        else if (arr[start] + arr[end] < target)
            start++;
        else if (arr[start] + arr[end] > target)
            end--;
    }

    return pairOfSum;
}

int majorityElement(vector<int> nums)
{
    // BRUTE FORCE O(n^2)
    // for (int i : nums)
    // {
    //     int frequency = 0;
    //     for (int j : nums)
    //     {
    //         if (i == j)
    //         {
    //             frequency++;
    //         }
    //     }
    //     if (frequency > nums.size() / 2)
    //     {
    //         return i;
    //     };
    // }

    // SORTING OPTIMIZED O(nlogn)
    // sort(nums.begin(), nums.end());
    int frequency = 0, currentNumber = nums[frequency];

    // for (int i : nums)
    // {
    //     if (i == currentNumber)
    //         frequency++;
    //     else
    //     {
    //         frequency = 1;
    //         currentNumber = i;
    //     }

    //     if (frequency > nums.size() / 2)
    //     {
    //         return i;
    //     }
    // }

    // MOORE'S VOTING ALGORITHM O(n)
    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency == 0)
        {
            currentNumber = nums[i];
        }
        if (nums[i] == currentNumber)
            frequency++;
        else
            frequency--;
    }

    return currentNumber;
}

int main()
{
    // print all subarrays
    int arr[5] = {1, 2, 3, 4, 5};
    int sz = 5;

    // printAllSubArrays(arr, sz); // O(n^3)
    // cout << printMaximumSubArrays(arr, sz) << endl; // O(n^2)
    // cout << kadanesAlgorithm(arr, sz) << endl; // O(n)

    // vector<int> result = pairSum(arr, sz, 7); // O(n^2)
    // vector<int> result = pairSumInSortedArray(arr, sz, 7);

    // for (int val : result)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // Majority Element with 3 methods
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2};

    // FIRST
    cout << majorityElement(nums) << endl;

    return 0;
}
