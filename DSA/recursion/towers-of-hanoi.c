#include <stdio.h>

void towers_of_hanoi(int disks, char src, char dest, char aux);

/**
 * main - recursion
 *
 * Return: 0
*/
int main(void)
{
	int num;

	printf("Number of disks: ");
	scanf("%d", &num);

	towers_of_hanoi(num, 'A', 'C', 'B');
}

/**
 * towers_of_hanoi - towers of hanoi
 *
 * @disks: number of disks
 * @src: starting peg
 * @dest: end peg (all pegs should end up here)
 * @aux: auxiliary peg
*/
void towers_of_hanoi(int disks, char src, char dest, char aux)
{
	if (disks == 1)
	{
		printf("Move disk 1 from Needle %c to Needle %c\n", src, dest);
		return;
	}
	/* move a disk on src to aux, using dest as auxiliary peg*/
	towers_of_hanoi(disks - 1, src, aux, dest);
	printf("Move disk %d from Needle %c to Needle %c\n", disks, src,
		   dest);
	/* move a disk on aux to dest, using src as auxiliary peg*/
	towers_of_hanoi(disks - 1, aux, dest, src);
}
