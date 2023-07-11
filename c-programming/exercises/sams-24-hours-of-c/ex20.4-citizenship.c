#include "ex20.4-citizenship.h"
#include "../../mini-codes/change_case.c"
#include <stdio.h>

void get_user_info(struct user_info *user);
void print_user_info(struct user_info *user);

/**
 * main - checking citizenship
 *
 * Return: 0
*/
int main(void)
{
	struct user_info user;

	get_user_info(&user);
	print_user_info(&user);

	return (0);
}

/**
 * get_user_info - collects the citizenship information
 *
 * @user: person
*/
void get_user_info(struct user_info *user)
{
	puts("CITIZENSHIP CHECKER\n");

	printf("Name: ");
	_fgets(user->name, 20);

	printf("Are you a US citizen? (y/n): ");
	scanf("%c", &user->is_us_citizen);
	getchar();

	if (user->is_us_citizen == 'y' || user->is_us_citizen == 'Y')
	{
		user->citizenship.US = 1;
		user->citizenship.other = 0;

		printf("Name of State: ");
		_fgets(user->info.us_state, 20);
	}

	else if (user->is_us_citizen == 'n' || user->is_us_citizen == 'N')
	{
		user->citizenship.other = 1;
		user->citizenship.US = 0;

		printf("Which country are you from: ");
		_fgets(user->info.country, 20);
	}
	else
	{
		user->citizenship.other = 0;
		user->citizenship.US = 0;
	}
}

/**
 * print_user_info - prints user citizenship information
 *
 * @user: person
*/
void print_user_info(struct user_info *user)
{
	if (user->citizenship.US && !user->citizenship.other)
	{
		puts("\nYou are a US citizen. Here are your details");
		printf("Name: %s\n", to_title(user->name));
		puts("Country: United States of America");
		printf("State: %s\n", user->info.us_state);
	}
	else if (user->citizenship.other && !user->citizenship.US)
	{
		puts("\nYou are NOT a US citizen. Here are your details");
		printf("Name: %s\n", to_title(user->name));
		printf("Country: %s\n", user->info.country);
	}
}
