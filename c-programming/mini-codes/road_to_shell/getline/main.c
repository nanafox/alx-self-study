#include "main.h"

/**
 * main - tests the custom getline function
 *
 * Return: 0
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n_read = 0;
	int active_state = RUNNING;

	while (active_state == RUNNING)
	{
		printf("$ ");
		fflush(stdout);

		n_read = _getline(&line, &len, STDIN_FILENO);
		if (n_read == -1)
		{
			perror("_getline");
			return (-1);
		}

		if (n_read == 0)
		{
			printf("\n");
			active_state = STOPPED; /* most definitely Ctrl+D or Ctrl+C was received */
		}

		/*
		 * handle the printing behaviour well. if it's a simple press of the
		 * ENTER key, just move to the next line and don't print it.
		 *
		 * TODO: Handle the same thing when only tabs or spaces are entered
		 */
		printf("%s", (*line != '\n') ? line : "");

		/* clear the line buffer and reset the length before going again */
		safe_free(line);
		len = 0;
	}
	safe_free(line);

	return (0);
}
