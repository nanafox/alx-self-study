#include <stdio.h>

int main(void)
{
	char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	char **ptr_days = days;

	printf("Day of week: ");
	int user_input;
	scanf("%d", &user_input);
	
	if (user_input >= 0 && user_input < 7)
	{
		printf("Pointer version: %s\n", *(ptr_days + user_input));
		printf("Array version: %s\n", days[user_input]);
	}
	else
		puts("Error, no such day.");
}
