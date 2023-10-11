#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 20

int *create_array(size_t size, int data);
void *memset(void *mem_area, int c, size_t size);
void print_array(int *arr, int size);

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	int *my_array;

	my_array = create_array(ARR_SIZE, 65);

	print_array(my_array, ARR_SIZE);

	free(my_array);
	return (0);
}

/**
 * _memset - fill memory with constant byte
 * @mem_area: the memory area to set
 * @c: byte to write
 * @size: number of bytes to write
 *
 * Description: The _memset() function fills the first @n bytes of the memory
 * area pointed to by @mem_area with the constant byte @c.
 *
 * Return: a pointer to memory areas @mem_area
 */
void *_memset(void *mem_area, int c, size_t size)
{
	size_t i;
	unsigned char *temp_mem_area;

	if (mem_area == NULL || size <= 0)
		return (mem_area); /* nothing to do here */

	temp_mem_area = (unsigned char *) mem_area;

	for (i = 0; i < size; i++)
		temp_mem_area[i] = (unsigned char) c;

	return (mem_area);
}

/**
 * create_array - creates an array of integers filled with specified use data
 * @size: size of array
 * @data: data to fill array with
 *
 * Return: a pointer to the newly created 1D array
 */
int *create_array(size_t size, int data)
{
	int *arr;

	if (size <= 0)
	{
		fprintf(stderr, "Invalid size\n");
		return (NULL);
	}

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (NULL);
	}

	_memset(arr, data, sizeof(int) * size);

	return (arr);
}

/**
 * print_array - prints array element in hexadecimal
 * @arr: a pointer to an integer array
 * @size: the size of the array
 */
void print_array(int *arr, int size)
{
	int i;

	if (size <= 0)
		return; /* can't print nothing */

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", arr[i]);
		i++;
	}
	printf("\n");
}
