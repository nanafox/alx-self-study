#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello, world";
	char *str2;

	memcpy(str2, str1, strlen(str1));

	puts(str1);
	puts(str2);
	
	printf("str1: %p\nstr2: %p\n", &str1, str2);
	printf("str1 == str2: %d\n", str1 == str2);
}
