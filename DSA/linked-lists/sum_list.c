#include <stdio.h>

/**
 * struct Node - node structure
 *
 * @data: data portion
 * @next: next pointer
 */
typedef struct Node
{
	int data;
	struct Node *next;
} Node;

int sum_list(Node *head);

/**
 * main - singly linked lists
 *
 * Return: 0
 */
int main(void)
{
	Node *head, a, b, c, d;

	head = &a;
	a.data = 7, a.next = &b;   /* value and next pointer. a -> b */
	b.data = 10, b.next = &c;  /* value and next pointer. b -> c */
	c.data = 4, c.next = &d;   /* value and next pointer. c -> d */
	d.data = 1, d.next = NULL; /* value and next pointer. d -> NULL */

	printf("Sum: %d\n", sum_list(head));

	return (0);
}

/**
 * sum_list - sum the data of nodes
 *
 * @head: start node
 *
 * Return: sum of nodes
 */
int sum_list(Node *head)
{
	int sum = 0;

	printf("Operands:");
	while (head != NULL)
	{
		printf(" %d", head->data);

		sum += head->data;
		head = head->next;
	}
	printf("\n");

	return (sum);
}
