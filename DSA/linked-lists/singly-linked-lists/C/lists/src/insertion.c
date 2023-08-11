#include "../headers/operations.h"
#include <malloc.h>

/**
 * prepend - insert element at the beginning of list
 *
 * Time complexity: O(1)
 * @head: pointer to head
 * @data: value to insert
 */
void prepend(Node **head, int data)
{
	Node *item = malloc(sizeof(Node));

	if (item == NULL)
		error(1);
	item->data = data;
	item->next = *head;
	*head = item;
}

/**
 * append - insert to the end of the list
 *
 * @head: pointer to pointer of head node
 * @data: data to insert
 */
void append(Node **head, int data)
{
	Node *item = malloc(sizeof(Node));
	Node *tail = *head;

	if (item == NULL)
		error(1);
	item->data = data;
	item->next = NULL;

	if (*head == NULL)
	{
		*head = item;
		return;
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = item;
}

/**
 * insert - insert node at any given position
 *
 * @head: pointer to pointer of head node
 * @pos: position to insert at
 * @data: actual data to insert
 */
void insert(Node **head, int pos, int data)
{
	int size = len(*head);

	if (pos > size)
		error(2);
	if (pos == 0)
	{
		prepend(head, data);
		return;
	}
	else if (pos == size)
	{
		append(head, data);
		return;
	}

	int index = 0;
	Node *node, *prev, *cur;

	node = malloc(sizeof(Node));
	if (node == NULL)
		error(1);
	cur = *head;
	while (index < pos)
	{
		index++;
		prev = cur;
		cur = cur->next;
	}

	node->data = data;
	prev->next = node; /* prev node's pointer points to new node */
	node->next = cur;  /* new node's next pointer points to next node */
}
