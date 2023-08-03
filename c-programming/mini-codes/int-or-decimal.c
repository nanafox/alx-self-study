#include <stdio.h>

int check_num_type(char *num);

/**
 * main - check if a number is an integer or float
 *
 * Return: 0
 */
int main(void)
{
	char nums[20];

	printf("Enter a number: ");
	scanf("%s", nums);

	/* check type */
	int result = check_num_type(nums);
	if (result == 1)
		printf("'%s' is a float\n", nums);
	else if (result == 2)
		printf("'%s' is an integer\n", nums);
	else if (result == 3)
		printf("'%s' is neither a float nor an integer\n", nums);

	return (0);
}

/**
 * check_num_type - checks if a number is an integer or a float
 *
 * @num: the number to check type of
 *
 * Return: 1 if float, 2 if integer, 3 if neither
 */
int check_num_type(char *num)
{
	int is_integer = 0;
	int is_float = 0;
	int is_neither = 0;
	int dot = 0;

	for (int i = 0; num[i] != '\0'; i++)
	{
		/* must be a digit or a dot*/
		if ((num[i] >= '0' && num[i] <= '9') || num[i] == '.')
		{
			if (num[i] == '.') /* assume float when a period is encountered */
			{
				is_float = 1;
				is_integer = 0;
				is_neither = 0;
				dot++;
			}
			 /* assume integer if no decimal points have been encountered */
			else if (dot == 0)
			{
				is_integer = 1;
				is_float = 0;
				is_neither = 0;
			}
		}
		else
		{
			is_neither = 1;
			is_integer = 0;
			is_float = 0;
			break; /* contains text, don't bother continuing */
		}
	}

	if ((is_float && dot == 1) && !(is_neither) && !(is_integer))
		return (1);
	else if (is_integer && !(is_float) && !(is_neither))
		return (2);
	else
		return (3);
}
