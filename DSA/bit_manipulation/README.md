# Bit Manipulation

- [Count set bits](count_set_bits.c)
	This program counts the number of bits set (1's) in a number. It uses the
	Kernighan algorithm to figure out what bit is set. The logic is as follows:
  - While the number is greater than zero (0)
  - Perform the operation `n & (n - 1)`.
  - If the resultant value of **ANDing** `n` is not 0 (zero), then
  - Increment the counter

- [Powers of 2](power_of_2.c)
	This program checks if a number is a power of 2 or not. The logic is similar
	to the one used in `Count set bits`. It also uses the Kernighan algorithm.
	The whole operation is done in constant time. 
  - Check whether the result of the operation `(n & (n - 1))` is equal to 0.
  - If it is, then we can say the number `n` is a power of 2, else it's not.
	  The algorithm works because **ANDing** any number by itself minus one will
	  result in 0 (zero) if it is a power of two. <br />
	  Example:
	  ```
	  n = 10
	  n - 1 = 9

	  n in binary       = 1010
	  (n - 1) in binary = 1001
	  				AND = ----
	  					  1000 (8 in decimal)
	  ```
	  The result of the above is not zero, so clearly `10` is not a power of 2.
	  Let's try another example.
	  ```
	  n = 16
	  n - 1 = 15

	  n in binary       = 0001 0000 (I've added spaces for readability)
	  (n - 1) in binary = 0000 1111
	  				AND = ---------
	  					  0000 0000 (0 in decimal)
	  ```
	  As you can see from the above, the result of ANDing `16 (n)` with `15 (n - 1)`
	  is zero. Therefore, we can say `16` is a power of.

- [Right-most set bit (Brute force method)](right_most_bit_brute_force.c)
- [Right-most set bit (Efficient method)](right_most_bit_efficient.c)

### Note

The logic for finding the right-most set bit is similar to the one used to count
the number of trailing zeros.
