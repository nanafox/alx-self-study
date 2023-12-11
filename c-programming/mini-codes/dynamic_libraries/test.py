#!/usr/bin/python3

import ctypes

utils = ctypes.CDLL('./libutils.so')

num1 = 10
num2 = 45

print("{:d} + {:d} = {:d}".format(num1, num2, utils.add(num1, num2)))

sentence = "testing out my shared library"

# First had to ensure I was accounting for the data types the function would
# expect and return as well. After this, my result was as I expected

utils.to_title.argtypes = [ctypes.c_char_p]
utils.to_title.restype = ctypes.c_char_p
utils.is_lower.argtypes = [ctypes.c_char_p]

# let's test the to_title function now
print(utils.to_title(sentence.encode()).decode())

# now let's check the is_lower function -> it checks if a string is all
# lowecase
print(utils.is_lower(sentence.encode()))
print(utils.is_lower(b"some Other sentence I have"))
print(utils.is_lower(b""))
print(utils.is_lower(None))
