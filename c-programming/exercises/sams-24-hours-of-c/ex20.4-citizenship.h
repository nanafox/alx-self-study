#ifndef _citizenship_h
#define _citizenship_h

#include <stdio.h>
#include <string.h>

/**
 * struct check_citizenship - flags for citizenship
 *
 * @US: US citizen
 * @other: not a US citizen
*/
struct check_citizenship
{
	unsigned int US: 1;
	unsigned int other: 1;
};

/**
 * union country_info - holds a country's information
 *
 * @us_state: for US citizens
 * @country: for non-US citizens. Accept country name
*/
union country_info
{
	char us_state[20];
	char country[20];
};

/**
 * struct user_info - collects user's citizenship information
 *
 * @name: name of user
 * @is_us_citizen: y if US citizen, n if otherwise.
 * @citizenship: a flag for citizenship
 * @info: more information about citizenship
*/
struct user_info
{
	char name[20];
	char is_us_citizen;
	struct check_citizenship citizenship;
	union country_info info;
};

/**
 * _fgets - fgets wrapper to remove newline character
 * @str: string
 * @len: size of string
 *
 * Return: void. Exits on error.
 */
void _fgets(char *str, int len)
{
	if (fgets(str, len, stdin) == NULL)
		return;
	str[strcspn(str, "\n")] = '\0';
}

#endif
