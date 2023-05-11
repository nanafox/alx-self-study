# Flow Control (loops), int and float types, Typecasting, and Computer logic

## The Two General Types of Loops

### Counter-controlled Looping

- The number of iterations is known before hand
- Dependent on some kind of counter value
- The counter may be increasing or decreasing
- The `for` loop is a natural choice this kind of loop

## Condition- or Sentinel-controlled Looping

- the number of iteration is dependent on a condition to be true
- the actual number of iterations is NOT known before hand
- a sentinel is a value that must attain a certain state before the loop completes
- The `do...while()` and `while()...` excel in this area

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

## The for Loop

Syntax

```c
for (expression1; expression2; expression3)
{
  statements;
  .
  .
}
```

### A breakdown of the expressions

**Note:** Multiple expressions, combined via commas, can be used as one expression in the for statement.

- **expression1**: *the initializer*
  - executed once (and for all) before the loop entering the loop body
- **expression2**: the conditional expression.
  - evaluated right after *expression1*
  - this condition is checked after every successful iteration to decide if the condition is still true, after which the body of the loop is executed.
- **expressions3**: not evaluated when the **for** loop is first encountered
  - it is evaluated after each iteration and before the statement goes back to test *expression2* again.

## The Null Statement

- a statement with no expression
- contains nothing but a semi-colon
- Here's are examples
  - [Null statement for loop](../../exercises/sams-24-hours-of-c/ex7.2-for-loop.c)
  - [Classy while loop null statement](../../exercises/sams-24-hours-of-c/ex7.3-while-loop.c)
  
```c
int i;

// null statement 1
for (i = 0; i < 5; i++);

// null statement 2
for (i = 0; i < 15; i += 2)
    ;

// null statement 3 - trivial but pay attention
for (i = 0; i < 30; i += 5);
    printf("i is now: %i", i);

```

### A breakdown of each Null Statement Example

1. In Example 1, the `for` loop executes alright. But as you can see, there are no statements and it doesn't have a body.
2. The second example is just like the first, just written differently
3. In the third example, you may be thinking it would print something like this...

```cmd
i is now: 0
i is now: 5
i is now: 10
.
.
.
i is now: 30
```

You wouldn't be wrong for thinking so, but back up a bit. The `for` statement in example 3 is just like the previous examples, even though it appears to have a body.

Notice the `;` immediately after the `for` loop statement? Great, that changes everything.

In fact, the only output you'd see from the `printf("i is now: %i", i);` line is `i is now: 30`.

This is because the *null* for loop statement executes, modifying the value of `i`. After the for loop is done, control is returned to the main function and the lines after the for loop is executed.

## Nested Loops

Loop within loop.

- Inner loops finish first, then control is given back to the outer loop.
- This continues until the condition false.

### Caveats & notes

- Be sure to create too many inner loops that complicates the over all program.
- At most, you should have 3 scopes of loops.
  - The most outer loop. **(i)**
  - The first inner loop. **(j)**
  - The most inner loop. **(k)**
- If you find yourself nesting a lot, you are probably doing it wrong
  - research a better to convey your logic.

[Example of a nested loop](../../exercises/sams-24-hours-of-c/nested-loops.c)

```c
int i, j;

// Outer Loop
for (i = 0; i < 6; i++)
{
    // Inner Loop
    for (j = 0; j < i; j++)
    {
        // inner loop prints hash
        printf("#");
    }
    // outer loop adds newline
    printf("\n");
}

```

## Infinite Loops 💣

💀 Never ending loops. You really want to be careful about them.

🐞 Also, it can be the hardest thing to debug if you mistakenly code it as a `null statement`

⚠️ Be cautious when coding loops.

### Examples of infinite loops with the while loop

```c
// example 1
while (1) 
{
    printf("Hello world\n");
}

// example 2
while (true) 
{
    printf("This is also an infinite loop\n");
}

// example 3
int i = 0;

while (i < 10) 
{
    printf("Here there is no statement to cause i to be equal or greater than 10\n");

    // what should have been here?
}
```

### Examples of infinite loops with the for loop

```c
// example 1 - No expressions (similar to while(true))
for (; ;) 
{
    printf("No expressions given, I might as well just loop forever😈\n");
}

// example 2 - Twisted conditional expression
for (int i = 0; i < 5; i--)
{
    printf("This is bad, really bad. The logic of the expression is messed up\n");
}

// example 3 - Null statement Infinite loop
for (; ;); // ⚠️ Null Statement
{
    /* 
      don't be fooled by the braces, this is still a null statement so far
      as the for loop is concerned. This printf line will never be executed.

      The flow of control is stuck in the for loop, 
      other parts of the code are waiting but will never receive control. 
    */
    printf("No expressions given, I might as well just loop forever😈\n");
}

```
