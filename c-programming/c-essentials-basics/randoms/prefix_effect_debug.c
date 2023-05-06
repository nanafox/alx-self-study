#include <stdio.h>

int main(void)
{
    int upper_bound = 5, i;
    int n = 5, pre_increment = 0;
    // debugging with for loop, using prefix incrementation
    for (i = 0; i < upper_bound; ++i)
    {
        pre_increment = ++n;
        // ! The pre-increment value and the original value of n will be the same
        // ? This is because of the prefix incrementation effect
        printf("value was %i, is now %i\n", pre_increment, n);
    }
    // A final look at the value to confirm that really the they are the same after runtime
    printf("Final prefix increment value, %i\n", pre_increment);
}

/*
! Observations
 * The prefix incrementation works something like this,
    * assume x = 4, and i is the value to hold the prefix incremented value.
 * So say we do this, i = ++x;
 ! * The above is equivalent to doing:
    * x = x + 1 (or simply x += 1)
        * (Value of at x this point is 5, let's continue)
    * Then the value of x (now 5) is assigned to i
        * i = x
        ! * so i = 5, now.
    * This process continues until the loop is complete.
    ! * One thing to note is that value of i (the pre-increment value) after runtime will be equal to x (the original value)
 */