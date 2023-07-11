#include <stdio.h>

/**
 * union u - a union
 *
 * @ch: character array
 * @num: contains the size of chars... for this purpose
*/
union u
{
	char ch[3];
	int num;
};

int UnionInitialize(union u val);

/**
 * main - unions: referencing the same memory location differently
 *
 * Return: 0
 */
int main(void)
{
	union u val;
	int x;

	x = UnionInitialize(val);

	printf("Value of x: %d\n\n", x);
	puts("The two characters held by the union");
	printf("%c\n", x & 0x00FF); /*gets the first letter*/
	printf("%c\n", x >> 8); /*gets the second letter*/
	printf("%c\n", x >> 16); /*gets the third letter*/

	return (0);
}

/**
 * UnionInitialize - initializes union with values
 *
 * @val: instance of union
 *
 * Return: val.num.
*/
int UnionInitialize(union u val)
{
	val.ch[0] = 'H';
	val.ch[1] = 'i';
	val.ch[2] = 'm';

	return (val.num); /*total of current chars*/
}
