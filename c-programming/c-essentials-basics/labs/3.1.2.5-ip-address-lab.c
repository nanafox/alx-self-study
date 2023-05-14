#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void get_ddn_ip_address(
    unsigned oct1, unsigned oct2,
    unsigned oct3, unsigned oct4);

/*
    TODO: Write a program that asks the user to provide four numbers, and then checks if these numbers are more than or equal to 0, and less than or equal to 255.

    TODO: Next, the program should write both forms of the IP address: the human-readable one and the 32-bit-number one.
*/

int main()
{
    /* your code */
    unsigned oct1, oct2, oct3, oct4;
    printf("IP Address: \n");
    scanf("%u\n%u\n%u\n%u", &oct1, &oct2, &oct3, &oct4);

    get_ddn_ip_address(oct1, oct2, oct3, oct4);

    return 0;
}

/*!
 * @brief Prints the corresponding dotted decimal of an IP address 
 * @param oct1 First octet of IPv4 address
 * @param oct2 Second octet of IPv4 address
 * @param oct3 Third octet of IPv4 address
 * @param oct4 Fourth octet of IPv4 address
 * @note as a bonus, you get the IP address' 32-bit value as well
 */
void get_ddn_ip_address(
    unsigned oct1, unsigned oct2,
    unsigned oct3, unsigned oct4)
{
    unsigned _32_bit_version;
    unsigned octet_size = 256;

    if (!(oct1 >= 0 && oct1 <= 255) || // check first octet
        (!(oct2 >= 0 && oct2 <= 255)) || // check second octet
        (!(oct3 >= 0 && oct3 <= 255)) || // check third octet
        (!(oct4 >= 0 && oct4 <= 255))) // check fourth octet
    {
        printf("Invalid IP address.\n");
        exit(1); // exit with non-zero code
    }

    else // compute 32-bit value of IP address
    {
        _32_bit_version = ((oct1 * pow(octet_size, 3)) + // multiply oct 1 with number of octets left (3)
                           (oct2 * pow(octet_size, 2)) + // multiply oct 2 with number of octets left (2)
                           (oct3 * pow(octet_size, 1)) + // multiply oct 3 with number of octets left (1)
                           (oct4 * pow(octet_size, 0))); // multiply oct 4 with number of octets left (0)
    }

    if (_32_bit_version) // if a valid IP address is received
    {
        printf("\nHuman-readable IP address is: %d.%d.%d.%d\n", oct1, oct2, oct3, oct4);
        printf("IP address as 32-bit number: %u\n", _32_bit_version);
    }
}
