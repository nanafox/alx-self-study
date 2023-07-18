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
	/*arrays and octet digit counters*/
	char ip_address[16];
	char octet1[5], oc1_digits = 0;
	char octet2[5], oc2_digits = 0;
	char octet3[5], oc3_digits = 0;
	char octet4[5], oc4_digits = 0;

	int invalid_ip = 0; /*error check*/
	int dots = 0;		/*used to count dots, which separates octets*/

	/*get ip address*/
	printf("IP Address: ");
	scanf("%s", ip_address);

	/*search through IP Address and make decisions*/
	for (int i = 0, n = strlen(ip_address); i < n; i++)
	{
		char c = ip_address[i]; /*character to search for*/

		/*confirm each character is a digit or a period*/
		if (c >= '0' && c <= '9' || c == '.')
		{
			/*count dots*/
			if (c == '.')
				dots++;

			else
			{
				/*ensure there is no more than 3 digits in an octet*/
				if (oc1_digits <= 3 && oc2_digits <= 3 && oc3_digits <= 3 &&
					oc4_digits <= 3)
				{
					if (dots == 0)
					{
						octet1[oc1_digits] = c; /*append first octet value*/
						oc1_digits++;
					}

					else if (dots == 1)
					{
						octet2[oc2_digits] = c; /*append second octet value*/
						oc2_digits++;
					}

					else if (dots == 2)
					{
						octet3[oc3_digits] = c; /*append third octet value*/
						oc3_digits++;
					}

					else if (dots == 3)
					{
						octet4[oc4_digits] = c; /*append fourth octet value*/
						oc4_digits++;
					}
				}

				else
				{
					invalid_ip = 1; /*more digits in an octet than expected*/
					break;
				}
			}
		}

		else
		{
			invalid_ip = 1; /*contains non-digits*/
			break;
		}
	}

	/*check ip validity and if more than dots than necessary were received*/
	if (invalid_ip || dots < 3 || dots > 3)
		puts("\nError: IP Address is invalid");

	else
	{
		/*print results*/
		printf("\nFull IP Address: %s.%s.%s.%s\n",
			   octet1, octet2, octet3, octet4);
		printf("Last 3 parts: %s.%s.%s\n", octet2, octet3, octet4);
		printf("Last 2 parts: %s.%s\n", octet3, octet4);
		printf("Last 1 part: %s\n", octet4);
	}

	return (0);
}
