#!/usr/bin/env python3


def primes_generator(n):
    """
    generate the first prime numbers in range n
    
    Notes:
        Aside number 2, all other even numbers can't be prime
        numbers because of the obvious reason behind prime numbers.
        This function starts off with 2 and 3, and continues from 5.
        It steps through all odd numbers, checking if they meet the
        prime number criteria. Once they do, they are added to the list
        of primes.
    Args:
        n - number range
    Returns:
        list of prime numbers requested
    """
    primes = [2, 3] # a starting point
    for i in range(5, n + 1, 2):
        if (i % i == 0) and (i % 3 == 0): # not prime
            continue
        primes.append(i) # prime

    return primes[:n]


if __name__ == '__main__':
    print("Primes Generator")
    n = int(input("range: "))

    print(primes_generator(n))
