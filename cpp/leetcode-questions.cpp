#include <iostream>
using namespace std;

double binaryExp(double x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans *= x;
        }
        x *= x;

        n /= 2;
    }

    return ans;
}

int buyAndSell(vector<int> prices)
{
    int maxProfit = 0, bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
            maxProfit = max(maxProfit, prices[i] - bestBuy);

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int containerWithMostWater(vector<int> heights)
{
    // BRUTE FORCE APPROACH
    // int n = heights.size();
    // int maxArea = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int width = j - 1, height = min(heights[i], heights[j]);

    //         maxArea = max(maxArea, width * height);
    //     }
    // }

    // return maxArea;

    // OPTIMAL APPROACH
    int n = heights.size();
    int left = 0, right = n - 1;
    int mostWater = 0;

    while (left < right)
    {
        int width = right - left;
        int height = min(heights[left], heights[right]);
        int currentWater = width * height;

        cout << height << endl;

        mostWater = max(mostWater, currentWater);

        heights[left] > heights[right] ? right-- : left++;
    }

    return mostWater;
}

void productOfArrayExceptSelf(vector<int> arr)
{
    // BRUTE FORCE
    // vector<int> newArr(arr.size(), 1);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int product = 1;
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         if (i != j)
    //         {
    //             product *= arr[j];
    //             // cout << arr[i] << " * " << arr[j] << " = " << product << endl;
    //         }
    //     }
    //     newArr[i] = product;
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << newArr[i] << " ";
    // }

    // cout << endl;

    // vector<int> suffix(arr.size()), prefix(arr.size()), newArr(arr.size());
    vector<int> newArr(arr.size(), 1);

    int prefix = 1;
    // prefix[0] = 1;
    // suffix[arr.size() - 1] = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        // newArr[i] = arr[i - 1] * prefix[i - 1];
        prefix = arr[i - 1] * prefix;
        newArr[i] = prefix;
    }

    int suffix = 1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        // suffix[i] = arr[i + 1] * suffix[i + 1];
        suffix *= arr[i + 1];
        newArr[i] *= suffix;
    }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     newArr[i] = prefix[i] * suffix[i];
    // }

    for (int i = 0; i < 4; i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Binary Exponentiation
    // cout << binaryExp(2.00000, 10) << endl; // Leetcode Problem 50

    // vector<int> prices = {7, 1, 5, 3, 6, 4};
    // cout << buyAndSell(prices) << endl; // Leetcode Problem 121

    // Container with Most Water
    // vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // cout << containerWithMostWater(heights) << endl; // Leetcode Problem 11

    vector<int> arr1 = {1, 2, 3, 4}, arr2 = {24, 12, 8, 6};
    productOfArrayExceptSelf(arr1); // Leetcode Problem 238

    return 0;
}
