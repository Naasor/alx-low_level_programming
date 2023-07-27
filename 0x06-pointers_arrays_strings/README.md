# C - More pointers, arrays and strings

## Header File

[main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `8-rot13.c`          | `char *rot13(char *);`                                         |
| `100-print_number.c` | `void print_number(int n);`                                    |
| `102-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `103-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

## Tasks
[0-strcat.c](./0-strcat.c): Write a function that concatenates two strings.
- Prototype: `char *_strcat(char *dest, char *src)`;
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

[1-strncat.c](./1-strncat.c): Write a function that concatenates two strings.
- Prototype: `char *_strncat(char *dest, char *src, int n)`;
- The _strncat function is similar to the _strcat function, except that
	* it will use at most n bytes from src; and
	* src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

[2-strncpy.c](./2-strncpy.c): Write a function that copies a string.
- Prototype: `char *_strncpy(char *dest, char *src, int n)`;
- Your function should work exactly like `strncpy`

[3-strcmp.c](./3-strcmp.c): Write a function that compares two strings.
- Prototype: `int _strcmp(char *s1, char *s2)`;
- Your function should work exactly like `strcmp`

[4-rev_array.c](./4-rev_array.c): Write a function that reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n)`;
- Where `n` is the number of elements of the array

[5-string_toupper.c](./5-string_toupper.c): Write a function that changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *)`;

[6-cap_string.c](./6-cap_string.c): Write a function that capitalizes all words of a string.
- Prototype: `char *cap_string(char *)`;
- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

[7-leet.c](./7-leet.c): Write a function that encodes a string into [1337](https://en.wikipedia.org/wiki/Leet).
- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- Prototype: `char *leet(char *)`;
- You can only use one `if` in your code
- You can only use two loops in your code
- You are not allowed to use `switch`
- You are not allowed to use any ternary operation

[8-rot13.c](./8-rot13.c): C function that encodes a string to rot13, without
  `switch` or ternary operations and using only one `if` and two loops.

[100-print_number.c](./100-print_number.c): C function that prints an integer
  without using `long`, arrays, pointers, or hard-coded special values.

[101-magic.c](./101-magic.c): C program that prints `a[2] = 98` using pointer magic.
    * Completion of [this source code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c).

[102-infinite_add.c](./102-infinite_add.c): C function that adds two numbers stored
  in strings to a buffer.
    * Assumes that strings are never empty and that numbers will always be positive, or 0.
    * Assumes there are only digits stored in the number strings.
    * If result can be stored in the buffer, returns a pointer to the result.
    * If result cannot be stored in the buffer, returns `0`.

[103-print_buffer.c](./103-print_buffer.c): C function that prints the content of an
  inputted number of bytes from a buffer.
    * Prints 10 bytes per line.
    * Starts with the position of the first byte in hexadecimal (8 chars), starting with `0`.
    * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
    * Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints `.`.
    * Each line ends with a new line `\n`.
    * If the inputted byte size is 0 or less, the function only prints a new line.
