#include "../node.h"
#include <stdlib.h>

void mem_chk(Node *node)
{
	if (node == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		exit(1);
	}
}

Node *prepend(Node *head, int data)
{
	Node *node = malloc(sizeof(Node));
	mem_chk(node);
	node->data = data;
	node->next = head;
	head = node;

	return (head);
}

Node *append(Node *head, int data)
{
	Node *node = malloc(sizeof(Node));
	mem_chk(node);
	node->data = data;
	Node *tail = head;
	node->next = NULL;

	if (head == NULL)
		return (prepend(head, data));

	while(tail->next != NULL)
		tail = tail->next;
	tail->next = node;
	return (head);
}

Node *insert(Node *head, int index, int data)
{
	Node *node = malloc(sizeof(Node));
	mem_chk(node);
	if (index == 0)
		return (prepend(head, data));
	int i = 0;
	
	Node *prev, *cur;
	node->data = data;
	cur = head;

	while((cur != NULL) && (i < index))
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	prev->next = node;
	node->next = cur;

	return (head);
}

void print(Node *head)
{
	Node *cur = head;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
