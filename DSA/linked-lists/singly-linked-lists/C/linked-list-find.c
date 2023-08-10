#include <stdio.h>

/**
 * struct Node - node structure
 *
 * @data: data
 * @next: next pointer
 */
typedef struct Node
{
	int data;
	struct Node *next;
} Node;


int linked_list_find(Node *head, int target);

/**
 * main - searching for elements in a linked list
 *
 * Return: 0
 */
int main(void)
{
	Node *head, a, b, c;

	head = &a;
	a.data = 3, a.next = &b;
	b.data = 2, b.next = &c;
	c.data = 9, b.next = NULL;

	printf("%s\n", (linked_list_find(head, 4)) ? "Found" : "Non-existent");
	printf("%s\n", (linked_list_find(head, 2)) ? "Found" : "Non-existent");
	printf("%s\n", (linked_list_find(head, 8)) ? "Found" : "Non-existent");
}

/**
 * linked_list_find - finds an element in a linked list
 *
 * @head: starting node
 * @target: search value
 *
 * Return: 1 if found, 0 if otherwise
 */
int linked_list_find(Node *head, int target)
{
	while (head != NULL)
	{
		if (head->data == target)
			return (1);
		head = head->next;
	}

	return (0);
}
