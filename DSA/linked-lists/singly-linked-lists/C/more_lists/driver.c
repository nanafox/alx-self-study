#include "lists.h"

/**
 * main - driver code to test linked lists
 *
 * Return: 0
 */
int main(void)
{
	list *my_list = init(NULL);

	insert(my_list, 0, 45);
	insert(my_list, -1, 23);
	insert(my_list, 0, 81);
	insert(my_list, 1, 67);
	printf("first number: %d\n", first(my_list));
	printf("last number: %d\n", last(my_list));
	printf("All items\n");
	print_list(my_list);
	printf("Size: %ld\n", len(my_list));

	return (0);
}
