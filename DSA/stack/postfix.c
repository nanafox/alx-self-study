#include "postfix.h"

/**
 * postfix - performs postfix arithmetic operations
 * @s: string containing expression
 *
 * Return: Result of operation
 */
double postfix(char *s)
{
	int i, len;
	double op1, op2, result;
	Node *expr = _stack();

	len = strlen(s);

	if (*s == '\0')
	{
		fprintf(stderr, "No expressions received");
		return (-1);
	}
	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			char data = s[i];

			push(&expr, atof(&data));
		}
		else if (is_operator(s[i]))
		{
			op1 = pop(&expr);
			op2 = pop(&expr);
			if (op1 == empty_stack || op2 == empty_stack)
			{
				fprintf(stderr, "Operation failed\n");
				return (empty_stack);
			}
			result = perform_ops(op1, op2, s[i]);
			push(&expr, result);
		}
	}

	return (expr->data); /* return top of stack */
}

/**
 * perform_ops - takes care performing the needed operation on two operands
 * @op1: operand 1
 * @op2: operand 2
 * @operator: operator
 *
 * Return: result of operation
 */
double perform_ops(double op1, double op2, char operator)
{
	switch (operator)
	{
		case '+':
			return (op1 + op2);
		case '-':
			return (op2 - op1);
		case '/':
			return (op2 / op1);
		case '*':
			return (op1 * op2);
	}
	return (err); /* assume error if all else fail */
}
