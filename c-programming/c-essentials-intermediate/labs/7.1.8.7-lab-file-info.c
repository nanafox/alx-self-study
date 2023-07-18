#include <stdio.h>
#include <stdlib.h>

/**
 * main - solution to lab 7.1.8.7
 *
 * Task:
 * Write a program that counts the metrics of a file:
 *   Number of all characters
 *   Number of whitespaces
 *   Number of lines
 *   Number of all lower-case letters
 *
 * @argc: argument counter
 * @argv: cmdline args. requires only 1 - filename
 *
 * Return: 0 on success, nonzero on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "usage: ./prog_name filename\n");
		return (-1);
	}

	FILE *filename = fopen(argv[1], "r");

	if (filename == NULL)
	{
		fprintf(stderr, "%s: %s\n", argv[1], "Error opening file.");
		return (-1);
	}

	int ws, chars, lines, c;

	ws = chars = lines = 0;
	int *small_letter = calloc(26, sizeof(int));

	while ((c = fgetc(filename)) != EOF)
	{
		++chars; /*count characters*/

		if (c >= 'a' && c <= 'z') /*count small letters*/
			small_letter[c - 97]++;
		if (c == ' ' || c == '\n' || c == '\t') /*count whitespaces*/
			++ws;
		if (c == '\n') /*count lines*/
			++lines;
	}

	printf("Lines: %d\n", lines);
	printf("Whitespaces: %d\n", ws);
	printf("Characters: %d\n", chars);

	for (int i = 0, c = 'a'; c <= 'z'; i++, c++)
		printf("Small letter: %c: %d\n", c, small_letter[i]);
}
