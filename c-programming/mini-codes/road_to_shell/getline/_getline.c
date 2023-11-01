#include "main.h"

/**
 * _getline - reads input from a file descriptor
 * @lineptr: a pointer to the string buffer
 * @n: number of bytes written
 * @fd: file descriptor
 *
 * Return: the number of bytes on success, else -1 on error
 */
ssize_t _getline(char **lineptr, size_t *n, int fd)
{
	ssize_t n_read;
	size_t total_read, buffer_size = BUFF_SIZE;

	if (*lineptr == NULL && *n == 0) /* check if we should allocate memort */
	{
		*lineptr = malloc(sizeof(char) * buffer_size);
		if (*lineptr == NULL)
			return (-1); /* memory allocation failed */
	}

	n_read = total_read = 0;
	while ((n_read = read(fd, *lineptr + total_read, BUFF_SIZE)) > 0)
	{
		if ((*lineptr)[total_read] == EOF)
		{
			safe_free(*lineptr);
			return (-1);
		}

		total_read += n_read;
		/* check if the buffer needs to be resized */
		if (total_read >= *n)
		{
			buffer_size *= 2;
			*lineptr = _realloc(*lineptr, total_read, buffer_size);
			if (*lineptr == NULL)
				return (-1); /* resizing buffer memory failed */
			*n = total_read;
		}
		if ((*lineptr)[total_read - 1] == '\n')
		{
			(*lineptr)[total_read] = '\0';
			*n = total_read;
			return (total_read);
		}
	}
	if (n_read == -1)
		return (-1);

	return (total_read);
}
