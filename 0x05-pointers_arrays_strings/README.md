# 0x04-pointers_arrays_strings

## Tasks

[0-reset_to_98.c](./0-reset_to_98.c) - Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
-  Prototype: void reset_to_98(int *n*);

[1-swap.c](./1-swap.c) - Write a function that swaps the values of two integers.
- Prototype: void swap_int(int *a, int *b);

[2-strlen.c](./2-strlen.c) - Write a function that returns the length of a string.
- Prototype: *int _strlen(char *s);

[3-puts.c](./3-puts.c) - Write a function that prints a string, followed by a new line, to stdout.
- Prototype: *void _puts(char *str);

[4-print_rev.c](./4-print_rev.c) - Write a function that prints a string, in reverse, followed by a new line.
- Prototype: void *print_rev(char *s);

[5-rev_string.c](./5-rev_string.c) - Write a function that reverses a string.
- Prototype: void *rev_string(char *s);

[6-puts2.c](./6-puts2.c) - Write a function that prints one char out of 2 of a string, followed by a new line.
- Prototype: void puts2(char *str*);
- The function should print only one character out of two, starting with the first one

[7-puts_half.c](./7-puts_half.c) - Write a function that prints half of a string, followed by a new line.
- Prototype: void puts_half(char *str);
- The function should print the second half of the string
- If the number of characters is odd, the function should print the *(length_of_the_string - 1) / 2 last characters of the string

[8-print_array.c](./8-print_array.c) - Write a function that prints n elements of an array of integers, followed by a new line.
- Prototype: void print_array*(int *a, int n);
- where n is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use printf

[9-strcpy.c](./9-strcpy.c) - Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
- Prototype: char *_strcpy(char *dest, char *src)*;
- Return value: the pointer to dest

[100-atoi.c](./100-atoi.c) - Write a function that convert a string to an integer.
- Prototype: *int _atoi(char *s);
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
- You are not allowed to use long
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
- We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
- If this flag is not available in you version of gcc, you can install the last version on your VM
- We will use gcc version 5 or above to compile

[101-keygen.c](./101-keygen.c) - Create a program that generates random valid passwords for the program 101-crackme.
- You are allowed to use the standard library
- You don’t have to pass the betty-style tests
- (you still need to pass the betty-doc tests)
- man srand, rand, time
- gdb and objdump can help