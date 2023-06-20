#include <stdio.h>
#include <string.h>

void str_reverse(char *s);

int main(void)
{
	char *message = "Hello Maxwell!";

	str_reverse(message);
}

void str_reverse(char *s)
{
	static int i = 0;
	int l = strlen(s);
	printf("%d ", l);
	
	putchar('\n');
	for (int i = 0; s[i] != '\0'; i++)
		putchar(s[l - i - 1]);
	putchar('\n');
}

void str_reverse_recurse(char *s)
{
	int len = 0, i = 0;
	
	if (s[i] != '\0')
		++len;
}
