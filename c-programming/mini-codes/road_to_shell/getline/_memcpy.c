#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to write
 *
 * Description: The _memcyp() function copies @n bytes from memory area @src to
 * memory area @dest. The memory areas must not overlap.
 *
 * Return: A pointer to @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	char *temp_dest = (char *) dest;
	const char *temp_src = (const char *) src;

	for (i = 0; i < n; i++)
		temp_dest[i] = temp_src[i];

	return (dest);
}
