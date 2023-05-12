#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("Using the goto logic.\n\n");

// Specific to the countdown
start_count: // label identifier

    if (i < 10) // conditional
    {
        printf("i is now %d -> using goto\n", i);
        i++;

        goto start_count; // goto statement to change flow of execution.
    }
    /* Uncomment this line if you'd want to introduce an infinite loop

    else
        goto shared_label;
    */

    printf("\nUsing the usual for loop\n");

    for (i = 0; i < 10; i++)
    {
        printf("i is now %d -> for loop\n", i);
    }
    goto shared_label;

shared_label:
    printf("This is is a shared goto label.\n");
}