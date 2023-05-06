#include <stdio.h>

int main(void)
{
    int upper_bound = 5, i;
    int n = 5, post_increment;
    // debugging with for loop, using postfix incrementation
    for (i = 0; i < upper_bound; i++)
    {
        post_increment = n++;
        // ! The post_increment value and the original value of n will not be the same
        // ? This is because of the postfix incrementation effect
        printf("value was %i, is now %i\n", post_increment, n);
    }
    // A final look at the value to confirm that really the they are NOT the same after runtime
    printf("Final postfix increment value, %i\n", post_increment);
}

/*
! Observations
 * The postfix incrementation works something like this,
    * assume x = 4, and i is the value to hold the postfix incremented value.
 * So say we do this, i = x++;
 ! * The above is equivalent to doing:
    * i = x
        * (Value of x at this point is 4, so i = 4 now)
    * Then the value of x is incremented after i's assignment
        * x = x + 1 (or simply x += 1)
        ! * so x = 5, now.
    * This process continues until the loop is complete.
    ! * One thing to note is that value of i (the post-increment value) after runtime will be 1 less than x (the original value)
 */