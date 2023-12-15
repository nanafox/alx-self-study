#include "array_stack.h"

/**
 * create_stack - creates and initializes a static array stack
 * @capacity: the expected number of elements the stack will hold
 *
 * Return: the newly created array stack, else exits with EXIT_FAILURE on error
 */
array_stack_t *create_stack(int capacity)
{
	array_stack_t *stack;

	if (capacity <= 0)
	{
		fprintf(stderr, "Invalid capacity for stack\n");
		exit(EXIT_FAILURE);
	}

	stack = malloc(sizeof(array_stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	stack->array = calloc(capacity, sizeof(int));
	if (stack->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	stack->top = -1;
	stack->capacity = capacity;

	printf("Created stack of size %d\n", stack->capacity);

	return (stack);
}

/**
 * push - inserts an element at the top of stack (TOS)
 * @stack: the array stack to insert into
 * @data: the data to insert
 *
 * Note: In the event that a Stack Overflow is encountered, the insertion
 * operation is not done. An error is printed and the user takes the next
 * options they have.
 */
void push(array_stack_t *stack, int data)
{
	/* check for Stack Overflow */
	if (is_full(stack))
	{
		fprintf(stderr, "Stack Overflow\n");
		return;
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
