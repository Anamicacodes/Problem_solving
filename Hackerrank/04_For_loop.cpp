/*
=============================================
Platform   : HackerRank
Problem    : For Loop
Difficulty : Easy
Language   : C++

Problem Summary:
Given two integers a and b, print the
English representation for numbers 1–9.
For numbers greater than 9, print
"even" or "odd" depending on parity.

Concepts Used:
- for loop
- if-else
- Arrays
- Modulo Operator

Time Complexity : O(b - a + 1)
Space Complexity: O(1)

Solved On : 30 July 2026
=============================================
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a;
    cin >> b;
    string words[]={ "","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(1<=i && i<=9){
            cout << words[i] <<endl;
        }
        else if(i>9){
           if(i%2==0){
                cout<< "even"<<endl;
           } 
           else{
                cout << "odd"<<endl;
           }
        }
    }
    return 0;
}