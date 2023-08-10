#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
	int data;
	struct Node *next; /* next pointer */

} Node;

Node *insert(Node *list, int x);
void print(Node *list);

int main(void)
{
	Node *list = NULL;
	int n, i, x;

	printf("Number of elements to store: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter the value: ");
		scanf("%d", &x);

		list = insert(list, x);
	}

	print(list);
}

/**
 * insert - inserts into the Node (beginning)
 *
 * @x: value to insert
 *
 * Return: 1 on success, -1 on error
 */
Node *insert(Node *list, int x)
{
	Node *temp = malloc(sizeof(Node));
	temp->data = x;
	temp->next = list; /* next element is written at the start */
	if (list != NULL)
		temp->next = list; /*build link to next element*/
	list = temp; /* for initial insertion*/

	return (list);
}

/**
 * print - prints list
 */
void print(Node *list)
{
	printf("List:");
	while (list != NULL)
	{
		printf(" %d", list->data); /* print data */
		list = list->next;		   /* point to next data */
	}
	printf("\n");
}
