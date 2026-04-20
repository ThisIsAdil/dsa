#include <iostream>
using namespace std;

int main()
{
    // Space Complexity is amount of space taken by an algorithm as a function of input size (n)

    // Time Complexity is not the actual time taken but the amount of time taken as a function of input size (n)
    // O(1) -> O(logn) -> O(n) -> O(nlogn) -> O(x^2) -> O(x^3) -> O(2^x) -> O(n!)
    // <-------- best / optimized ------->  <------ worst / not optimized ------>

    int n = 5;

    // O(1)
    // int sumTillN = n * (n + 1) / 2;

    // O(n)
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }

    // O(n^2) && O(n^3)
    // nested loops

    // O(log n) - here value of n is always divide by 2 in everystep
    // binary search

    // O(nlog n)
    // merge sort, quick sort, greedy algorithm

    // O(2^n) - Exponential
    // occurs in recursion

    // O(n!) - Factorial
    // in recursion N Queens using brute force

    // RECURSION AND SPACE COMPLEXITY IS LEFT AND WILL BE DONE AFTER DOING RECURSION

    // cout << fact << endl;

    return 0;
}
