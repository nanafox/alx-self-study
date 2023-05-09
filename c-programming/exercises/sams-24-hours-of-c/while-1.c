#include <stdio.h>

int main(void)
{
    int countdown = 10;

    printf("Countdown to kick-off\n\n");

    printf("---Loop begins---\n"); // loop begins
    while (countdown > 0) // expression -> condition to check
    {
        // statements
        printf("Days before kick-off: %d\n", countdown);
        --countdown; // a mechanism to ensure the expression become false over time
    }
    printf("---Loop ends---\n"); // loop ends here.

    // this will be executed only after the while loop is done and hands over control
    // back to the rest of the code.
    printf("\nHurray! The day is finally upon us\n");
    printf("Kick-off starts soon\n");
}