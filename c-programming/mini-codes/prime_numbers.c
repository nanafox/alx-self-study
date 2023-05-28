#include <stdio.h>
#include <stdbool.h>

/**
 * main - generate the prime numbers in a given range. Max is 20 elements.
 *
 * Return: 0
*/
int main(void)
{
	int odd, i;
	bool is_prime;
	int prime_index = 2; /*the next index in the primes array*/
	int primes[20] = {2, 3}; /*prime numbers array*/

	/*loop through odd numbers, even numbers can't be primes by default*/
	for (odd = 5; odd <= 20; odd += 2)
	{
		is_prime = true;

		for (i = 1; is_prime && (odd / primes[i] >= primes[i]); ++i)
			if (odd % primes[i] == 0)
				is_prime = false;

		if (is_prime)
		{
			primes[prime_index] = odd;
			++prime_index;
		}
	}

	/*print prime numbers*/
	for (i = 0; i < prime_index; ++i)
		printf("%d ", primes[i]);
	putchar('\n');

	return (0);
}
