#include <stdio.h>
#include "sll-ops.c"
#include "../node.h"

void print(Node *head);

int main(void)
{
	Node *head = NULL;

	head = append(head, 10);    /* [10] */
	head = prepend(head, 54);   /* [54, 10] */
	head = insert(head, 1, 21); /* [54, 21, 10] */
	head = append(head, 33);    /* [54, 21, 10, 33] */
	head = insert(head, 3, 45); /* [54, 21, 10, 45, 33] */
	head = insert(head, 0, 98); /* [98, 54, 21, 10, 45, 33] */
	
	print(head);
}
