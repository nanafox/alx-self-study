#include <stdio.h>
#include "sll-ops.h"
#include "../node.h"

/**
 * main - testing out linked list
 *
 * Return: 0
*/
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

	head = del_head(head);
	print(head);
	head = del_tail(head);
	print(head);
	head = del_tail(head);
	print(head);

	head = del_index(head, 5); /* Invalid Index */
	print(head);

	Node *list = NULL;
	/* deleting from an empty list */
	list = del_tail(list);
	list = del_head(list);

	/* inserting data */
	list = append(list, 10);
	print(list);
	list = del_index(list, 0);
	print(list);

	/* delete list */
	head = del_list(head);
	print(head);
}
