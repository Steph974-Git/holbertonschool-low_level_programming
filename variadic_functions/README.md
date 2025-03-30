# Variadic Functions

This repository contains a collection of C functions that demonstrate the use of variadic functions in the C programming language.

## Files and Descriptions

| File | Description |
| ---- | ----------- |
| variadic_functions.h | Header file containing function prototypes and structure definitions for all functions in the project |
| 0-sum_them_all.c | Function that returns the sum of all its parameters |
| 1-print_numbers.c | Function that prints numbers followed by a new line |
| 2-print_strings.c | Function that prints strings followed by a new line |
| 3-print_all.c | Function that prints anything based on format specifiers |

## Function Descriptions

### `int sum_them_all(const unsigned int n, ...)`
- Returns the sum of all its parameters
- Returns 0 if n is 0

### `void print_numbers(const char *separator, const unsigned int n, ...)`
- Prints numbers followed by a new line
- `separator` is the string to be printed between numbers
- `n` is the number of integers passed to the function
- If `separator` is NULL, it's not printed

### `void print_strings(const char *separator, const unsigned int n, ...)`
- Prints strings followed by a new line
- `separator` is the string to be printed between the strings
- `n` is the number of strings passed to the function
- If a string is NULL, it prints "(nil)" instead
- If `separator` is NULL, it's not printed

### `void print_all(const char * const format, ...)`
- Prints anything based on format specifiers
- Format specifiers:
  - `c`: prints a character
  - `i`: prints an integer
  - `f`: prints a float
  - `s`: prints a string (prints "(nil)" if string is NULL)
- Any other character is ignored

## Helper Functions

Several helper functions used for the implementation of `print_all`:
- `print_char`: Prints a character
- `print_int`: Prints an integer
- `print_float`: Prints a float
- `print_string`: Prints a string

## Compilation and Usage

Each function can be compiled with its corresponding main file. For example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o sum
```

Run the executable to see the output:

```
./sum
```

This repository demonstrates the use of variadic functions, which are functions that can accept a variable number of arguments in C programming.