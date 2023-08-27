from itertools import compress

"""
compress: returns data elements corresponding to true selector elements.

Retrieving odd and even numbers from a range
"""
data = range(15, 30)
even_selector = [0, 1] * 10
odd_selector = [1, 0] * 10

even_numbers = list(compress(data, even_selector))
odd_numbers =list(compress(data, odd_selector))

print("Data:", list(data))
print(f"Even selector: {even_selector}")
print(even_numbers)
print(odd_numbers)

