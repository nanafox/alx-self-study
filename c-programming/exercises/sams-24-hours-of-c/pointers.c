#include <stdio.h>

/**
 * main - understanding pointers
 *
 * Return: 0
*/
int main(void)
{
	int age = 45;
	int *ptr_age = &age;

	printf("Address of age: %p\n", &age); /*left value*/
	/*left value (address) of pointer*/
	printf("The address of ptr_age: %p\n", &ptr_age);
	/*right value - address of another variable*/
	printf("The address of age through ptr_age: %p\n", ptr_age);
	printf("Value of age: %d\n", age); /*right value (content)*/
	printf("Value ptr_age points to: %d\n", *ptr_age); /*dereferencing*/

	return (0);
}

