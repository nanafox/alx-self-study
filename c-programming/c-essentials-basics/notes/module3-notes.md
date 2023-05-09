# Flow Control (loops), int and float types, Typecasting, and Computer logic

## Working with Loops

- Looping is a programming technique used to perform the set of statements over
and over until certain specified conditions are met.
  - Also known as iteration.
- There are three looping methods in C
  - `while` loop
  - `do-while` loop
  - `for` loop

### The while loop

- purpose to repeatedly execute a statement over and over again (iterate)
*while* a given condition is true.
  - e.g. **while (learning) {put_phone_on_silent};**
  - the above is clear and in human language. While you are learning,
  you probably wouldn't want to be bothered by the numerous notifications.
  - Therefore this *while* loop ensures that so long as you are learning,
  your phone is on silent.
- once the *condition*, the expression in the *while* loop becomes false,
the statements within its body are no longer executed and control is handed
over to other parts of the program / code to continue, if any.
- The general format of the **while** loop looks like this:

```c
while(expression) // the condition to check for
    statement; // body -> the lines of code to execute if the expression is true
```

- The expression is the condition of the `while` loop
  - it is evaluated **first**.
  - if it is true or a evaluates to a *non-zero* value, the statement in the body
  are executed
  - this expression is check every time until the condition is no longer true.
    - i.e. it evaluate to zero, or logical false.
- The statement or statements **(surrounded by { }),** are executed each time the `expression` is true.
  - be sure to have a mechanism in the body that causes the `expression` to become
  false with each iteration. Else you'll have an infinite loop.
- [Example - Code file](../../exercises/sams-24-hours-of-c/while-1.c)

  ```c
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
  ```

### The do-while loop

- unlike the `while` which checks conditions before executing the contents of its body,
the `do-while` loop runs the body *at least once* before checking the `expression` (condition).
- the statements in the loop are guaranteed to execute at least once before the expression is tested.
- The format of the `do-while`. Using the **K** and **R** style.

  ```c
  do {
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statement_n;
  } while (expression);
  ```

- [Example - Code file](../../exercises/sams-24-hours-of-c/do-while-1.c)
  
  ```c
  int countdown = 10;
  printf("Countdown to kick-off\n\n");

  printf("---Loop begins---\n"); // loop begins
  do
  {
      printf("Days before kick-off: %d\n", countdown);
      --countdown;
  } while (countdown > 0);

  printf("---Loop ends---\n"); // loop ends here.

  // this will be executed only after the do-while loop is done and hands over control
  // back to the rest of the code.
  printf("\nHurray! The day is finally upon us\n");
  printf("Kick-off starts soon\n");
  ```

### Reinforce concepts on while and do-while loops

- Take a look at the [example](../../exercises/sams-24-hours-of-c/while-1.c) under while loop, now modify the value of `countdown` and set it to zero.
- Compile and run the program.
- Do you see any statements from the body of the `while` loop executed? Why?
- Again, do same for the `do-while` loop [example](../../exercises/sams-24-hours-of-c/do-while-1.c)
  - modify the value of `countdown` and set it to zero.
  - Compile and run the program.
  - What are your observations? Why?
