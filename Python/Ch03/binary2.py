#!/usr/bin/env python3

"""
Converting integer to binary using the divmod built-in function
"""

n = int(input("number to conver: "))
remainders = []

if n == 0:
    remainders.append(n)
else:
    while n > 0:
        n, remainder = divmod(n, 2) # n // 2, n % 2
        remainders.insert(0, remainder)

for i in remainders:
    print(i, end="")
print()
