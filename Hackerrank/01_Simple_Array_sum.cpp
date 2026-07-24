/*
========================================
Platform  : HackerRank
Problem   : Simple Array Sum
Difficulty: Easy

Summary:
Given an array of integers,
return the sum of all elements.

Concepts:
- Recursion
- Arrays
- Vectors

Solved On:
24 July 2026
========================================
*/

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int>& arr, int index) {
    if (index == arr.size())
        return 0;

    return arr[index] + simpleArraySum(arr, index + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << simpleArraySum(arr, 0);

    return 0;
}