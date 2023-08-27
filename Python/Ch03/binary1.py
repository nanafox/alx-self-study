#!/usr/bin/env python3

number = int(input("number to convert: "))
remainders = []

while number > 0:
    remainders.insert(0, number % 2)
    number //= 2

print(remainders)
