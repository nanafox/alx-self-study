#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_valid_ip(const char *ip_addr);
void print_ip_validity(char *ip_addr);

/**
 * main - solution for lab 6.1.7.6: Checking IP Address validity
 *
 * Return: 0
 */
int main(void)
{
	/*addresses to test*/
	char test_addrs[][16] = {
		{"8.8.8.8"},	{"192.168.108.100"}, {"2343.4.1.2"}, {"127.0.0.1"},
		{"12.1.1"},		{"127.zero.0.1"},	 {"1.1.1.1"},	 {"176.23.1.2"},
		{"3.1.3.1234"}, {"a.b.c.d"},		 {"0.0.0.0"}};

	/*get number of rows*/
	int rows = sizeof(test_addrs) / sizeof(test_addrs[0]);

	/*check IP address validity*/
	for (int i = 0; i < rows; i++)
		print_ip_validity(test_addrs[i]);

	return (0);
}

/**
 * is_valid_ip - Check if IP Address is valid
 *
 * @ip_addr: ip address
 *
 * Return: true if valid, false if otherwise
 */
bool is_valid_ip(const char *ip_addr)
{
	int dots = 0;
	int octets[4] = {0};		  /*Array to store octet values*/
	bool has_four_octets = false; /*Indicates if exactly 4 octets were found*/

	char *ip_copy = strdup(ip_addr); /*Create a copy of the IP address*/

	char *token = strtok(ip_copy, "."); /*parts - split on dots*/

	while (token != NULL)
	{
		if (dots > 3) /*Error: Too many dots*/
		{
			free(ip_copy);
			return (false);
		}

		/*Check if ip octet consists only of numeric characters*/
		for (int i = 0; i < strlen(token); i++)
		{
			if (!isdigit(token[i]))
			{
				free(ip_copy);
				return (false);
			}
		}

		int octet = atoi(token); /*integral value*/

		if (octet < 0 || octet > 255) /*Error: Invalid octet value*/
		{
			free(ip_copy);
			return (false);
		}

		octets[dots] = octet; /*update octets*/
		++dots;

		token = strtok(NULL, ".");
	}

	free(ip_copy);

	if (sizeof(octets) / sizeof(octets[0]) == 4)
		has_four_octets = true; /*all octets are valid*/

	return (has_four_octets);
}

/**
 * print_ip_validity - prints whether is valid or not
 *
 * @ip_addr: ip address
 */
void print_ip_validity(char *ip_addr)
{
	if (is_valid_ip(ip_addr))
		printf("%s is a valid IP address\n", ip_addr);

	else
		printf("%s is not a valid IP address\n", ip_addr);
}
