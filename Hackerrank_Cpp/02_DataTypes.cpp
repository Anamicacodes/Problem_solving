/*
=============================================
Platform   : HackerRank
Problem    : Data Types
Difficulty : Easy
Language   : C++

Problem Summary:
Read an integer, long integer, character,
float, and double from input and print each
value on a new line while maintaining the
required output precision.

Concepts Used:
- Input/Output
- Data Types
- Formatting

Time Complexity : O(1)
Space Complexity: O(1)

Solved On : 24 July 2026
=============================================
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float f;
    double db;
    scanf("%d %ld %c %f %lf", &a,&b,&c,&f,&db);
    printf("%d\n%ld\n%c\n%f\n%lf", a,b,c,f,db);
    return 0;
}