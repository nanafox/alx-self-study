#include "array_stack.h"

/**
 * create_stack - creates and initializes a dynamic array stack
 *
 * Return: the newly created array stack, else exits with EXIT_FAILURE on error
 */
array_stack_t *create_stack(void)
{
	array_stack_t *stack;

	stack = malloc(sizeof(array_stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	stack->array = calloc(1, sizeof(int));
	if (stack->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	stack->top = -1;
	stack->capacity = 1; /* set the initial capacity to 1 */

	printf("Created stack of size %d\n", stack->capacity);

	return (stack);
}

/**
 * push - inserts an element at the top of stack (TOS)
 * @stack: the array stack to insert into
 * @data: the data to insert
 *
 * Note: In the event that a Stack Overflow is encountered, the stack is
 * resized (doubled) to accommodate the new element. If the stack capacity
 * resizing fail, we exit with EXIT_FAILURE
 */
void push(array_stack_t *stack, int data)
{
	/* check for Stack Overflow and resize the stack accordingly */
	if (is_full(stack))
	{
		/* double the previous capacity and resize the stack */
		stack->capacity *= 2;
		stack->array = realloc(stack->array, stack->capacity * sizeof(int));

		/* clean up and exit if stack resizing operation failed */
		if (stack->array == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			delete_stack(stack);
			exit(EXIT_FAILURE);
		}
	}

	/* insert the data into the stack and update the top */
	stack->array[++stack->top] = data;
}

/**
 * pop - deletes the element at the top of stack
 * @stack: the array stack to delete from
 *
 * Return: the data at the top of stack that was just deleted.
 * In the event of stack underflow (empty list), an error is printed and -1 is
 * returned.
 */
int pop(array_stack_t *stack)
{
	if (is_empty(stack))
	{
		fprintf(stderr, "Stack Underflow\n");
		return (-1);
	}

	/* pop the TOS and adjust top to point to the new top */
	return (stack->array[stack->top--]);
}

/**
 * delete_stack - deletes an array stack
 * @stack: the stack to delete
 *
 * Note: When the stack is initialized, the deletion operation is performed,
 * but an error is printed when the operation is tried on uninitialized stack.
 * In such cases, we exit with EXIT_FAILURE
 */
void delete_stack(array_stack_t *stack)
{
	if (stack != NULL)
	{
		if (stack->array != NULL)
		{
			free(stack->array);
			stack->array = NULL;
		}
		free(stack);
		stack = NULL;
		return;
	}

	fprintf(stderr, "Error: Can't free uninitialized stack\n");
	exit(EXIT_FAILURE);
}

/**
 * print_stack - prints the elements in a stack starting from the top of stack
 * @stack: the array stack to print
 */
void print_stack(array_stack_t *stack)
{
	int i;

	if (is_empty(stack))
	{
		printf("Empty stack\n");
		return;
	}

	for (i = stack->top; i >= 0; i--)
	{
		printf("%d\n", stack->array[i]);
	}
}
