#include <stdio.h>
#include "headers/operations.h"

int main(void)
{
	Node *head = NULL;

	append(&head, 10);
	append(&head, 23);
	append(&head, 19);
	append(&head, 83);
	prepend(&head, 100);
	print_list(head);

	puts("Deleting 23");
	del(&head, 23);
	print_list(head);

	puts("\nPrinting list in reverse order...");
	print_reverse(head);
	printf("\nOriginal list: ");
	print_list(head);

	puts("\nReverse list in place");
	reverse_list(&head);
	print_list(head);
	return (0);
}
