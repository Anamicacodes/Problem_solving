/*
=============================================
Platform   : HackerRank
Problem    : Conditional Statements
Difficulty : Easy
Language   : C++

Problem Summary:
Given an integer n, print its English word
for numbers 1–9. Otherwise print
"Greater than 9".

Concepts Used:
- if-else if ladder

Time Complexity : O(1)
Space Complexity: O(1)

Solved On : 30 July 2026
=============================================
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "one";
    else if (n == 2)
        cout << "two";
    else if (n == 3)
        cout << "three";
    else if (n == 4)
        cout << "four";
    else if (n == 5)
        cout << "five";
    else if (n == 6)
        cout << "six";
    else if (n == 7)
        cout << "seven";
    else if (n == 8)
        cout << "eight";
    else if (n == 9)
        cout << "nine";
    else
        cout << "Greater than 9";

    return 0;
} 


/* Another approach :

string words[] = {
    "", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
    };

if (n >= 1 && n <= 9)
    cout << words[n];
else
    cout << "Greater than 9";

*/