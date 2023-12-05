#include "lists.h"

/**
 * main - driver code to test linked lists
 *
 * Return: 0
 */
int main(void)
{
	list *my_list = init(_free);
	int data;

	puts("Insertions");
	insert(my_list, 0, 45);
	insert(my_list, -1, 23);
	insert(my_list, 1, 81);
	insert(my_list, -2, 67);

	puts("\nElements");
	printf("first number: %d\n", first(my_list));
	printf("last number: %d\n", last(my_list));
	printf("All items\n");
	print_list(my_list);
	printf("Size: %ld\n", len(my_list));

	puts("\nPop operation");
	data = pop(my_list);
	printf("Removed: [%d]\n", data);
	print_list(my_list);
	printf("first number: %d\n", first(my_list));
	printf("last number: %d\n", last(my_list));

	puts("\nSpecific element removal");
	if (rm(my_list, 67) == 0)
		printf("Element removed\n");
	else
		printf("An error occured while removing element\n");

	print_list(my_list);

	puts("\nClearing list and trying to insert afterwards");
	clear(my_list);
	my_list = NULL;
	append(my_list, 45);
	print_list(my_list);

	return (0);
}
