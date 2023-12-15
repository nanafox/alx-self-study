#include "array_stack.h"
#define SIZE 10

/**
 * main - driver code to test array stack
 *
 * Return: 0 on success
 */
int main(void)
{
	/* let's create aa array stack */
	array_stack_t *my_stack = create_stack(SIZE);

	puts("\n==== Insertions ====\n");
	push(my_stack, 10);
	push(my_stack, 89);
	push(my_stack, 23);
	push(my_stack, 12);

	print_stack(my_stack);

	puts("\n==== Deletions ====\n");

	printf("Removed: [%d]\n", pop(my_stack));
	printf("Removed: [%d]\n", pop(my_stack));

	puts("\n==== Stack After Deletions ====\n");

	print_stack(my_stack);

	delete_stack(my_stack);

	return (0);
}
