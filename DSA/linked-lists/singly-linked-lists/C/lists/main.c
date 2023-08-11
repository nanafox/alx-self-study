#include "headers/operations.h"
#include <malloc.h>
#include <stdio.h>

/**
 * main - client side, using linked list node
 *
 * Return: 0
 */
int main(void)
{
	Node *head = NULL;

	prepend(&head, 5);
	prepend(&head, 10);
	prepend(&head, 32);
	append(&head, 12);
	prepend(&head, 25);
	append(&head, 76);
	prepend(&head, 100);

	print_list(head);
	printf("Length: %u\n", len(head));
	printf("Search for 32: %s\n", find(head, 32) ? "Found" : "Not found");
	printf("Search for 4: %s\n", find(head, 4) ? "Found" : "Not found");
	append(&head, 100);

	/* delete operation */
	del(&head, 12);
	print_list(head);
	printf("Length: %u\n", len(head));

	del_all(&head, 100);
	print_list(head);
	printf("Length: %u\n", len(head));

	/* insertion - at different positions */
	insert(&head, 2, 100);
	insert(&head, 0, 34);
	insert(&head, 6, 21);
	insert(&head, 8, 123);
	print_list(head);
	return (0);
}
