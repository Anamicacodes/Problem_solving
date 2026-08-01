"""
=============================================
Platform   : HackerRank
Problem    : Python If-Else
Difficulty : Easy
Language   : Python

Problem Summary:
Given an integer n, print "Weird" or
"Not Weird" based on the given conditions.

Concepts Used:
- if
- elif
- else
- Modulo Operator
- Relational Operators

Time Complexity : O(1)
Space Complexity: O(1)

Solved On : 30 July 2026
=============================================
"""

n = int(input())

if (n % 2 != 0):
    print("Weird")
elif (n % 2 == 0 and 2 <= n <= 5):
    print("Not Weird")
elif (n % 2 == 0 and 6 <= n <= 20):
    print("Weird")
elif (n % 2 == 0 and n > 20):
    print("Not Weird")