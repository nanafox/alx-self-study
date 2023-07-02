#include <stdio.h>

int main(void)
{
	char words[] = "Hello";

	1 [words] = 'a';
	puts(words);

	words[1] = 'e';
	puts(words);

	return (0);
}
