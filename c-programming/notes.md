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
    - an identifier
      - a name used to identify a variable, function, or any user-defined item
      - starts with A to Z, a to z or an underscore **`_`**
      - contains digits too (0 to 9)
      - does not allow punctuations (e.g. @, $, %) within identifiers
      - **case-sensitive**
    - a constant
    - a string literal
    - symbols

## Uses of C

- OS
- Drivers
- Language Compilers
- Language interpreters
- Databases
- Language compilers
- Text Editors, Print Spoolers
- Assemblers

## Structure of C Code

- Preprocessor commands
- Functions
- Variables
- Statements and Expressions
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
