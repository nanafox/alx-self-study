#include "node.h"
#include <stdio.h>

int get_node_value(Node *head, int index);
void print_nodes(Node *head);

/**
 * main - finding at index position
 *
 * Task: Write a function, get_node_value, that takes in the head of a linked
 * list and an index. The function should return the value of the linked list
 * at the specified index.
 *
 * Return: 0
 */
int main(void)
{
	Node *head, a, b, c;

	head = &a;
	a.data = 43, a.next = &b;
	b.data = 12, b.next = &c;
	c.data = 98, c.next = NULL;

	print_nodes(head);
	printf("Value at index position %d: %d\n", 3, get_node_value(head, 3));
	printf("Value at index position %d: %d\n", 0, get_node_value(head, 0));
	printf("Value at index position %d: %d\n", 2, get_node_value(head, 2));
	printf("Value at index position %d: %d\n", 4, get_node_value(head, 4));
	printf("Value at index position %d: %d\n", 1, get_node_value(head, 1));
}

/**
 * get_node_value - returns the node value at a given index
 *
 * @head: starting node
 * @index: index
 *
 * Return: value at index on success, -1 if no value found
 */
int get_node_value(Node *head, int index)
{
	int compare_index = 0;

	while (head != NULL)
	{
		if (compare_index == index)
			return (head->data);
		compare_index++;
		head = head->next;
	}

	return (-1);
}

/**
 * print_nodes - print node values
 *
 * @head: head node
 */
void print_nodes(Node *head)
{
	printf("List values:");
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	putchar('\n');
}
