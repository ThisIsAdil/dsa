#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> nums)
{
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
}

int singleNumber(vector<int> nums)
{
    int ans = 0;

    for (int val : nums)
    {
        ans ^= val;
    }

    return ans;
}

void linearSearch(vector<int> nums, int target)
{
    for (int val : nums)
    {
        if (target == val)
            cout << val << " is found." << endl;
    }
}

void reverseArray(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        swap(nums.at(start), nums.at(end));
        start++;
        end--;
    }

    printVector(nums);
}

int main()
{
    // STL (standard template library)
    // arrays are fixed and to fix this vectors are created

    // arrays static
    // - compile time
    // - memory allocation
    // - stack memory

    // vectors dynamic
    // - runtime
    // - memory allocation
    // - heap memory

    vector<int> vec;
    // vector<int> vec = {0, 1, 2};
    // vector<int> vec(3, 0); // 3 is size and 0 is the value on each index

    // VECTOR FUNCTION
    // cout << "size: " << vec.size() << endl;
    // vec.push_back(25);
    // vec.push_back(25);
    // vec.pop_back();
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // cout << vec.at(1) << endl; // cout << vec[1] << endl;

    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    // vec.push_back(3);
    // vec.push_back(3);

    // cout << vec.size() << endl;     // 3
    // cout << vec.capacity() << endl; // 4
    // capacity 4 because vectors double their sizes everytime they get full and there is an element added if 5th element will be added capacity will be 8

    // SINGLE NUMBER
    // n ^ n = 0
    // n ^ 0 = n
    vector<int> nums = {4, 1, 2, 1, 2};
    // cout << singleNumber(nums) << endl;

    // Linear Search
    // linearSearch(nums, 2);

    // Reverse Vector (also check if vectors changes also reflected in main)
    reverseArray(nums);

    cout << "Inside Main Nums ";
    printVector(nums);

    return 0;
}
