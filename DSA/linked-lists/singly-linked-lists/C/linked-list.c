#include <stdio.h>
#include <malloc.h>

struct Node
{
	int data;
	struct Node *next;
};

void print_list(struct Node *head);
struct Node *prepend(struct Node *head, int data);

int main(void)
{
	struct Node *head = NULL;
	struct Node a, b;
	
	/* manual node creation */
	head = &a;
	a.data = 65;
	a.next = &b;
	b.data = 66;
	b.next = NULL;

	print_list(head);
	putchar('\n');
	for (int i = 67; i < 75; i++)
		head = prepend(head, i); /* insert node with function */
	
	print_list(head);
	putchar('\n');
}

struct Node *prepend(struct Node *head, int data)
{
	struct Node *temp = malloc(sizeof(struct Node));

	temp->data = data; /* set data */
	temp->next = head; /* update next pointer */
	head = temp;

	return (head);
}

/**
 * print_list - recursively print nodes
 *
 * @head: head node
 */
void print_list(struct Node *head)
{
	if (head == NULL)
		return;
	printf("%c -> ", head->data);
	print_list(head->next);
}
