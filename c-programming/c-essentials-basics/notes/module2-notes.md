# Module 2 Notes - Basic Data Types, Operations and Flow Control

[Variables and data types](../../exercises/programming-in-c/variables-data-types.c)

## Data Types

### Double

- Twice the size of a float(which is normally 4 bytes.)
  - this makes **double** 8 bytes (64 bits)
- All floating point constants are taken as a **double** by the C compiler
  - **floats** can be forced by appending `f` to the number. e.g. `3.14f`
- The format characters include `%e`, `f`, or `%g`
- `printf` always rounds floats and doulbes to six decimal place by default

### The Single Character Type (char)

- enclosed within a pair of single quotes. e.g. `'a'`, `'\n'`, `';'`
- uses the `%c` format specifier. e.g. `printf("%c", 'A');`

### The Boolean Data Type (_Bool)

- represents a True(1) or False(0)
- adding the `<stdbool.h>` header file makes it easier to work with bools
- check [this file](../../new_main_style.c) for a sample use case of both scenarios

### Tpe Specifiers: long, long long, short, unsigned, short and signed

- Check this [file](../randoms/sizeof.c) to for sizes.
- **long**
  - The long doubles the current space of a data type.
    - **long int -> 8 bytes**
    - **long double -> 16 bytes**
  - uses the formact specifier `%li`, `%lx`, `%lo`, `%ld`
  - e.g. `long int factotrial;`
  - There's no `long float`
    - Reason I believe it is the case is because, **double** handles that and there's
    no need to use the long for it. If a bigger space is needed for **floats**, **double** is
    used. In the same way, if the space provided by **double** (8 bytes) is not enough, then
    it can be further *doubled* with **long**, given it **16 bytes**.
- **short**
  - guarantees a space of no less than 2 bytes (16 bits)
  - uses the formact specifier `%hi`, `%hx`, `%ho`, `%hd`
- **unsigned**
  - used when the interger is to contain **only positive numbers**
  - gives the full space to the positive integers.
    - No need to worry about **integer overflow** errors that occur when using
    a **signed** data type.
    - Here's the caveat, using **negative** numbers raises the **integer overflow** error.
  - **int** has a 4 byte (32 bits) space, and all of this will be dedicative only to
  positive numbers.
  - e.g. `unsigned int age;`
  - allows you to omit the **int** keyword
    - e.g. `unsigned age;` works just as the `unsigned int age;`
  - takes care of figuring out the right data type.

### Notes of Scientific Notation Expressions

- The **base value (mantissa)** can be an integer
  - can be a double or float
- The Exponent value **must** be in integer

### The Type Cast Operator

- Has the effect of converting one data to another.
- a unary operator
- The conversion *change* is not permanent
- has precedence over arithmentic operators, except the plus(+) and minus(-)
unary operators
- [Example](../../exercises/programming-in-c/type-cast.c)

  ```c
      // integer values
      int score1 = 73, score2 = 46, score3 = 89;
      int num_of_scores = 3;

      // simple average computation
      //? (73 + 46 + 89) / 3 = 69
      int average = (score1 + score2 + score3) / num_of_scores;
      // print average
      printf("Integer Division Average: %d\n", average); // result is 69. Because decimal point is truncated

      // Another way would've been to store it in a float.
      //? (73 + 46 + 89) / 3 = 69.00. Only the result is stored as float
      float float_average = (score1 + score2 + score3) / num_of_scores; // integer division
      printf("Intger to Float Average: %.2f\n", float_average);         // result is 69.00. Still not quite right.

      // ! Expected result is 69.33(infinite)
      // using type casting.
      //? (73 + 46 + 89) / 3.0 = 69.33 -> the average is converted to a float before division
      float type_cast_average = (score1 + score2 + score3) / (float)num_of_scores;
      printf("Type Cast Average: %.2f\n", type_cast_average);
  ```

### The Assignment Operator

- right-to-left operator
- the value of the right is stored in the container on the left. `a = 5;`
- 5 is stored in `a`, so anytime it is referenced, the value is returned

### The Arithmetic Assignment Operator

| Operator | Description | Example | Data types accepted |
|:--------|:----------:|:--------:|:---------:|
| += | Addition Assignment Operator |a = a + b; => a += b; | int, float, double, char, etc. |
| -= | Subtraction Assignment Operator | a = a - b; => a -= b; | nt, float, double, char, etc. | |
| *= | Multiplication Assignment Operator | a = a * b; => a *= b; | int float, double |
| /= | Division Assignment Operator | a = a / b; => a /= b; | int, float, double |
| %= | Modulus Assignment Operator | a = a % b; => a %= b; | Requires integral values |

- Check out this [file](../../exercises/sams-24-hours-of-c/arithmetic.c)
