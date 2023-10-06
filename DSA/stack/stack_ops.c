#include "stack.h"

/**
 * _stack - creates an empty stack
 *
 * Return: pointer to head of stack
 */
Node *_stack(void)
{
	Node *stack = malloc(sizeof(Node));

	stack = NULL;
	return (stack);
}

/**
 * new_frame - creates a new stack frame
 *
 * Return: stack frame
 */
Node *new_frame(void)
{
	Node *frame = malloc(sizeof(Node));

	if (frame == NULL)
		return (NULL); /* memory allocation failed */

	return (frame);
}

/**
 * pop - remove the topmost stack frame
 * @stack: pointer to stack of stack
 *
 * Return: popped frame's data
 */
int pop(Node **stack)
{
	int data;
	Node *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "Empty stack\n");
		return (empty_stack);
	}
	*stack = (*stack)->next;
	data = temp->data;
	free(temp);
	return (data);
}

/**
 * push - adds a stack frame to the top of the stack
 * @stack: stack
 * @data: data
 */
void push(Node **stack, int data)
{
	Node *frame = new_frame();

	if (frame == NULL)
		exit(push_fail); /* push operation failed - memory allocation failed */
	frame->data = data;
	frame->next = *stack;
	*stack = frame;
}

/**
 * print_stack - prints contents int the stack
 * @stack: head of stack
 */
void print_stack(Node *stack)
{
	printf("Start: ");
	while (stack)
	{
		printf("%d ", stack->data);
		stack = stack->next;
	}
	printf("End\n");
}
