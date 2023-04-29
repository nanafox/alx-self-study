# C Programming

## Facts about C

- invented to write the UNIX OS
- MySQL and Linux are written in C
- successor of B
- initially used for system development works
  - programs that make-up the OS
- comes pre-installed on most Linux distributions
  - `gcc -v` to check version
- written in a file with a **.c** file extention.
  - **E.g. hello.c**
- contains tokens
  - tokens are either
    - a keyword.
      - reserved words in C
      - e.g. **printf**, **int**, **if**, **switch**, etc.
      - [All 32 keywords](https://www.programiz.com/c-programming/list-all-keywords-c-language)
    - an identifier
      - a name used to identify a variable, function, or any user-defined item
      - starts with A to Z, a to z or an underscore **`_`**
      - contains digits too (0 to 9)
      - does not allow punctuations (e.g. @, $, %) within identifiers
      - **case-sensitive**
    - a constant
    - a string literal
    - symbols
- a genral-purpose language
- does not support OOP

## Uses of C

- OS
- Drivers
- Language Compilers
- Language interpreters
- Databases
- Language compilers
- Text Editors, Print Spoolers
- Assemblers

## Structure of a C Program

- Preprocessor commands
- Functions
- Operators
  - arithmetic operators

  | Operator | Meaning | Example |
  |:-------:|:---------:|:--------:|
  | + | Addition | 2 + 3 |
  | - | Subtraction | 50 - 25 |
  | / | Division | 6 / 2 |
  | * | Multiplication | 2 * 6 |
  | % | Modulus (Remainder) | 10 % 2 |

- [Idenitifiers](#facts-about-c)
- Constants and Variables
  - A constant is a value that never change
    - 10, 20, 1
  - A variable serves as a container for values
    - values can be changed later
    - e.g. `i = 10;`. **i** is assigned the value of **constant** 10
- Statements
  - a complete instruction
  - ends with a semi-colon.
  - example

    ```c
    int i = 45;               // an integer assignment statement
    return 0;                // the return statement
    printf("Hello world!"); // the print statement
    ```

- Statement Blocks
  - contained within an opening brace `{` and a closing brace `}`
  - the C compiler treats it as a single statement
  - [Example](check_even.c)

  ```c
  int even_numbers = 0; // just a counter.
  // check for even numbers in a given range and print them on the console
  for (int i = 0; i < 10; i++) 
  {
      if (i % 2 == 0 && i > 0)
      {
          printf("%i is an even number\n", i);
          ++even_numbers;
      }
  }
  ```

- Expressions
  - a combination of expressions, variables, and operators that are used to denote compution
  - Examples
    - `2 + (45- 24);`
    - `i += 15;`
- Comments

A simple example of this is found in [_this file_](hello.c)

## Running a C code

- `gcc *source_file.c*` This will compile the code under the default name **a.out**
- Anytime you compile without specifying the output filename, the previous **a.out** is overwritten.
- A much better approach would be to use `gcc -o output_filename source_file.c`
  - e.g. `gcc -o hello hello.c`
- The process of _"gluing"_ different executable code together is called **linking**
  - The software that makes this possible is the linker
- The preliminary information needed by the compiler is included in header files
  - File with the _.h_ extension
  - usually a preprocessor. e.g. stdio.h

## Advantages of C

- Readability: Programs are easy to read
- Maintanability
- Portability: Programs work on different platforms
  - realized by re-compiling the program (code) with different compilers for different computers
    - Microsoft uses a different compiler, so does *nix systems
- Reusable code or programs
  - parts of code can be saved as a library and invoked (included) in the next project
- A relatively small language
  - not a lot of keywords to memorize
- Makes it easier to jump on other languages and learn them with much relative ease
  - e.g. C++, Java, Perl, C#
- Allows you to control computer hardware and peripherals
  - Sometimes C is referred to as a low-level language because of this
