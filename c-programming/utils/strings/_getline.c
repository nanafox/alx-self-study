/**
 * _getline - gets a line from stdin
 *
 * @line: line
 * @len: length of line
 *
 * Return: length of line
 */
int _getline(char *line, int len)
{
	int c, i;
	
	printf("Input: ");
	for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return (i);
}

