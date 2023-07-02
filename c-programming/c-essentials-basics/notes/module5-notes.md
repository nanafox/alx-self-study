# Advanced

- The **[ ]** operator is commutative

  ```c
  char words[] = "Hello";

  puts(words); /*prints Hello*/

  1[words] = 'a'; /*modify 2nd element*/
  puts(words); /*prints Hallo*/

  words[1] = 'e'; /*change back to 'e'*/
  puts(words) /*prints Hello*/
  ```
