# Module 1 Notes - Intro to Programming, Variables and Comments

- `int main(void);` is an example of a function prototype

- the `puts` (Put String) and `printf` fucntions accept strings are arguments.
  - passing a different type directly cause an error

## Numbers primer

- integers (`int`)
  - devoid of decimal points or fractional part
  - uses `%d`
- floating-point (`float | double`)
  - contains a fractional part
    - at least six digits of precisions
  - floating point numbers use `%f`
  - Also known as **real numbers**
  - the `%e` format specifier is used for scientific notation
- very strict
- the charactertic of a number which determines its kind, range and application is known as **type**.
- does not allow string characters
  - e.g. **10,245,324** is easier to read for humans but not for machines. Instead type **10245324**
- any number that starts with **0** is considered an **octal** or a **base 8**
- numbers in the format 0xA are **hex**

## [Variables](/c-programming/c-essentials-basics/randoms/variables.c)

- simply a container of placeholder for various data types values.
- components
  - name. e.g. name_of_person[20];
  - type.
    - uniquely defines what can be stored inside the variable
    - e.g. char
  - value. "theLazyPrgrammer"
    - the actual data
- can be declared without assigning a value.
  - e.g. `int age;`
- declared and assigned
  - e.g. `int age = 78;`
- or declared and later used

  ```c
  // declare the variable
  int age;

  printf("Some lines before variable assignment\n");

  // variable assignment or initialization
  age = 75;

  // print variable
  printf("Age: %d\n", age);

  // assign value at declaration
  int age_again = 75;
  printf("Age: %d\n", age_again);


  // can be chained at declaration
  int x, y, z;
  ```

- unlike Python, chained variables can only be a assigned a common value

  ```c
  // C Code
  int x, y, z = 40;

  // can not do - This will cause an error
  int x, y, z = 10, 20, 30. // That is, x = 10, y = 20, z = 30. This is not possible

  // It has to be manually assigned
  int x = 10;
  int y = 20;
  int z = 30

  // or a one liner, like this
  int x = 10; int y = 20; int y = 30; // these are 3 separate statements but on the same line
  ```

  ```python
  # Python code

  x, y, z = 10, 20, 30  # x = 10, y = 20, z = 30
  ```

C provides several other basic data types besides int and float, including:
| keyword | description |
|:--------:|:-----------:|
| char | character-a single byte |
| short| short integer |
| long | long integer |
| double | double-precision floating point |
