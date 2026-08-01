'''Task
The provided code stub reads an integer, , from STDIN. For all non-negative integers , print .

Example

The list of non-negative integers that are less than  is . Print the square of each number on a separate line.
'''
if __name__ == '__main__':
    n = int(input())
    for i in range(0,n):
        print(i**2)
"""
The included code stub will read an integer, , from STDIN.

Without using any string methods, try to print the following:
Note that "" represents the consecutive values in between."""

for i in range(1,n+1):
        print(i,end="")