#include <stdio.h>

void print_countdown(int i);
void print_shared_label(void);
void print_for_countdown(int i);

int main(void)
{
    int i = 0;

    print_countdown(i);
    
}

void print_countdown(int i)
{
    printf("Using the goto logic.\n\n");
    
start_count: // label identifier

    if (i < 10) // conditional
    {
        printf("i is now %d -> using goto\n", i);
        i++;

        goto start_count; // goto statement to change flow of execution.
    }
    else
        print_shared_label();
}

void print_for_countdown(int i)
{
    printf("\nUsing the usual for loop\n");

    for (i = 0; i < 10; i++)
    {
        printf("i is now %d -> for loop\n", i);
    }
}

void print_shared_label(void)
{
shared_label:
    printf("\nThis is is a shared goto label.\n");
}

