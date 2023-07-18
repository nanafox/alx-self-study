#include <stdio.h>

/* 2.1.3.8 LAB: Character types and values: Part 1

? Initial Code

    #include <stdio.h>

    int main()
    {
        printf("Diff between '%c' and '%c' is : %d\n", 'c', 'a', 'c', 'a');
        printf("Diff between '%c' and '%c' is : %d\n", 'a', 'c', 'a'  'c');
        return 0;
    }

    Expected output:
    Diff between 'c' and 'a' is : 2
    Diff between 'a' and 'c' is : -2
    
    ! I corrected the typo in the original code
*/

int main()
{
    printf("Diff between '%c' and '%c' is : %d\n", 'c', 'a', 'c' - 'a');
    printf("Diff between '%c' and '%c' is : %d\n", 'a', 'c', 'a' - 'c');
    return 0;
}