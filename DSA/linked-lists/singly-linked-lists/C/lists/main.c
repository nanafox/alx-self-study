#include "headers/operations.h"
#include <stdio.h>
#include <malloc.h>

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
	printf("%s\n", find(head, 32) ? "Found" : "Not found");
	printf("%s\n", find(head, 4) ? "Found" : "Not found");
	append(&head, 100);
	del(&head, 12);
	print_list(head);
	printf("Length: %u\n", len(head));

	del_all(&head, 100);
    print_list(head);
	printf("Length: %u\n", len(head));

	free(head);
	return (0);
}
