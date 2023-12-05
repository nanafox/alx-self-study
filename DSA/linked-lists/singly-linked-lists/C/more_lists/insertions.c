#include "lists.h"

/**
 * init - initializes a list
 * @cleanup: a pointer to a function to free memory for the list
 *
 * Return: the initilaized list
 */
list *init(void (*cleanup)(void **))
{
	list *new_list = malloc(sizeof(list));

	if (new_list == NULL)
	{
		fprintf(stderr, "Not enough memory to continue the operation!\n");
		exit(EXIT_FAILURE);
	}

	new_list->cleanup = cleanup;
	new_list->head = NULL;
	new_list->tail = NULL;
	new_list->size = 0;

	return (new_list);
}

/**
 * append - appends data to the end of the list
 * @user_list: the user's list
 * @data: the data to insert
 *
 * Time Complexity: O(1)
 */
void append(list *user_list, const int data)
{
	node *element;

	if (user_list == NULL)
	{
		fprintf(stderr, "Insertion failed! The List is not initialized!\n");
		return;
	}

	element = malloc(sizeof(node));
	if (element == NULL)
	{
		fprintf(stderr, "Memory allocation failed for new node\n");
		return;
	}

	element->data = data;
	element->next = NULL;

	/* handle insertion when the list is empty */
	if (user_list->size == 0)
	{
		user_list->head = element;
		user_list->tail = element;
	}
	/* handle insertion at the end of the list when the list is not empty */
	else
	{
		user_list->tail->next = element;
		user_list->tail = element; /* update the tail */
	}

	user_list->size++;
}

/**
 * insert - inserts data at a given index in a list
 * @user_list: the list to insert data
 * @index: the index to insert at (can be postive or negative)
 * @data: the data to insert
 *
 * Description: When the @index is a  negative number, the insertion is done
 * from behind. The opposite is true when it's a positive number
 */
void insert(list *user_list, ssize_t index, const int data)
{
	node *element, *current, *prev = NULL;
	size_t pos, c_pos = 0;

	if (index == -1 || user_list->size == 0 || index == (ssize_t)user_list->size)
	{
		append(user_list, data);
		return;
	}

	element = malloc(sizeof(node));
	element->data = data;
	if (element == NULL)
	{
		fprintf(stderr, "Memory allocation failed for the new element\n");
		return;
	}
	/* get the actual index to insert at and account for negative indexes*/
	pos = (size_t)(index < 0) ? index + user_list->size : (size_t)index;
	if (pos == 0)
	{
		element->next = user_list->head;
		user_list->head = element;
	}
	else
	{
		current = user_list->head;
		while (current != NULL)
		{
			if (c_pos == pos)
			{
				element->next = current;
				prev->next = element;
				break;
			}
			c_pos++;
			prev = current;
			current = current->next;
		}
	}
	user_list->size++;
}
