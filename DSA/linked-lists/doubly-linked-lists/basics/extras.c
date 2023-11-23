#include "dll.h"

/**
 * _free - frees memory
 * @ptr: a pointer t the addrerss to free
*/
void _free(void **ptr)
{
	if (*ptr != NULL && ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

/**
 * check_err - a mini error checker
 * @ptr: the pointer to check for NULL
 * @ptr_type: the type of data the pointer points
 *
 * Pointer Types: 'l' is used to check for uninitialized lists.
 * 'm' checs for memory alllocation failures.
 *
 * Return: 0 if not NULL, -1 otherwise
*/
int check_err(void *ptr, char ptr_type)
{
	if (ptr == NULL)
	{
		if (ptr_type == 'l')
		{
			fprintf(stderr, "The list is not initialized\n");
			return (-1);
		}
		if (ptr_type == 'm')
		{
			errno = ENOMEM;
			perror("check_err");
			return (-1);
		}
	}

	return (0);
}

/**
 * print_list - prints all elements in the list
 * @list: the list to print elements from
*/
void print_list(dll_t *list)
{
	node *tmp;
	int i = 0;

	if (check_err(list, 'l') == -1)
		return;

	tmp = list->head;
	while (tmp != NULL)
	{
		printf("[%2d]: %d\n", i++, tmp->data);
		tmp = tmp->next;
	}
}

/**
 * clear - clears a list
 * @list: the list to clear
*/
void clear(dll_t *list)
{
	node *tmp;

	if (check_err(list, 'l') == -1)
		return; /* the list is not initialized */

	if (list->head == NULL)
		return;

	/* free memory for each element the list */
	while (list->head != NULL)
	{
		tmp = list->head;
		list->head = list->head->next;

		list->cleanup((void **)&tmp);
	}
	list->cleanup((void **)&list);

}
