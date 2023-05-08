#include <stdio.h>

/** 2.1.3.10 LAB: Character type and values: Part 3

? Initial Code

#include <stdio.h>

int main()
{
    char zero = '0';

    // Your code

    return 0;
}

Expected Output:
    '1' - '0' is: 1
    '2' - '0' is: 2
    '3' - '0' is: 3
    '4' - '0' is: 4
    '5' - '0' is: 5
    '6' - '0' is: 6
    '7' - '0' is: 7
    '8' - '0' is: 8
    '9' - '0' is: 9
    '0' - '0' is: 0
*/

#include <stdio.h>

int main()
{
    char zero = '0';

    /* My code starts here*/
    char next = '1';

    for (int i = 1; i < 10; i++)
    {
        printf("'%c' - '%c' is: %d\n", next, zero, next - zero);
        next++;
    }
    printf("'%c' - '%c' is: %d\n", zero, zero, zero - zero);
    
    return 0;
}
