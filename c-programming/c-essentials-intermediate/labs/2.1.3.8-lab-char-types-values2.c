#include <stdio.h>
/* 2.1.3.9 LAB: Character types and values: Part 2

? Initial Code

    #include <stdio.h>

    int main()
    {
        char firstLetter = 'A';
        char firstSmallLetter = 'a';
        char lastLetter = 'Z';
        char lastSmallLetter = 'z';
        printf("Upper case letters between (and with) '%c' and '%c' is : %d\n",
            lastLetter, firstSmallLetter, lastLetter firstLetter 1);
        printf("Lower case letters between (and with) '%c' and '%c' is : %d\n",
            lastSmallLetter, firstSmallLetter, lastSmallLetter, firstLetter, 1);
        return 0;
    }

    Expected Output:
    Upper case letters between (and with) 'Z' and 'A' is : 26
    Lower case letters between (and with) 'z' and 'a' is : 26

    ! I corrected the typo in the original code
*/

int main()
{
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters between (and with) '%c' and '%c' is : %d\n", 
		lastLetter, firstSmallLetter, (lastLetter - firstLetter + 1));
	printf("Lower case letters between (and with) '%c' and '%c' is : %d\n", 
		lastSmallLetter, firstSmallLetter, (lastSmallLetter - firstSmallLetter + 1));
	return 0;
}