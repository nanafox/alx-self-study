#include <stdio.h>

void print_pattern(int n);

int main()
{
    int n;
    scanf("%d", &n);

    print_pattern(n);
    return 0;
}

/**
 * @brief Prints a pattern with the number
 * @param n A number
 */
void print_pattern(int n)
{
    int len = n * 2 - 1; // calculate length of the pattern
    for (int i = 0; i < len; i++)
    { // loop through each row of the pattern
        for (int j = 0; j < len; j++)
        {                                                // loop through each column of the pattern
            int min = i < j ? i : j;                     // find the minimum value between i and j
            min = min < len - i ? min : len - i - 1;     // find the minimum value between min and len-i-1
            min = min < len - j - 1 ? min : len - j - 1; // find the minimum value between min and len-j-1

            // print the value of n minus the minimum value, followed by a space character
            printf("%d ", n - min);
        }
        printf("\n"); // print a newline character to start a new row
    }
}