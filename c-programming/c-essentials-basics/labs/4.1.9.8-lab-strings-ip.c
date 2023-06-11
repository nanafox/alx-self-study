#include <stdio.h>
#include <string.h>

/**
 * main - Solution for C Essentials Lab 4.1.9.8 - Strings part 1
 *
 * Description: This program accepts an IP Address an input and prints
 * from the last 2, 3, and 4 octets.
 *
 * It checks to confirm that it is a valid IP Address before printing
 * A valid IP address is separated by three dots and each octet is within
 * the range 0 through 255.
 *
 * Return: 0
 */
int main(void)
{
	/*get ip address*/
	char ip_address[16];
	char octet1[5], oc1_digits = 0;
	char octet2[5], oc2_digits = 0;
	char octet3[5], oc3_digits = 0;
	char octet4[5], oc4_digits = 0;
	int dots = 0;
	int invalid_ip = 0; /*check IP address validity*/
	int count_digits = 0;

	printf("IP Address: ");
	scanf("%s", ip_address);

	for (int i = 0; i < strlen(ip_address); i++)
	{
		char c = ip_address[i]; /*char to search*/

		/*ensure they are digits*/
		if (c >= '0' && c <= '9' || c == '.')
		{
			/*ensure there is no more than three dots*/
			if (dots > 3)
			{
				invalid_ip = 1; /*more dots than needed*/
				break;
			}
			/*split on the dots*/
			if (c == '.')
				dots++; /*count dots*/

			else /*append all other digits*/
			{
				/*ensure there is no more than 3 digits in each octet*/
				if (oc1_digits <= 3 && oc2_digits <= 3 &&
					oc3_digits <= 3 && oc4_digits <= 3)
				{
					if (dots == 0)
					{
						octet1[oc1_digits] = c;
						oc1_digits++;
					}
					else if (dots == 1)
					{
						/*append second octet value*/
						octet2[oc2_digits] = c;
						oc2_digits++;
					}

					else if (dots == 2)
					{
						/*append third octet value*/
						octet3[oc3_digits] = c;
						oc3_digits++;
					}

					else if (dots == 3)
					{
						/*append fourth octet value*/
						octet4[oc4_digits] = c;
						oc4_digits++;
					}
				}

				else
				{
					/*it contains more than 3 digits in one or more octets*/
					invalid_ip = 1;
					break;
				}
			}
		}

		else
		{
			invalid_ip = 1; /*contains invalid characters*/
			break;
		}
	}

	/*handle error messages*/
	if (invalid_ip)
		puts("\nError: not a valid address.");

	else
	{
		/*add terminating character*/
		octet2[oc2_digits] = '\0';
		octet3[oc3_digits] = '\0';
		octet4[oc4_digits] = '\0';

		/*print results*/
		printf("\nLast 3 parts: %s.%s.%s\n", octet2, octet3, octet4);
		printf("Last 2 parts: %s.%s\n", octet3, octet4);
		printf("Last 1 part: %s\n", octet4);
	}

	return (0);
}
