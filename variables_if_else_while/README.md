# C - Variables, if, else, while

This repository contains a collection of C programs that demonstrate the use of variables, conditional statements (if-else), and loops (while) in the C programming language.

## Files and Descriptions

| File | Description |
| ---- | ----------- |
| `0-positive_or_negative.c` | Program that assigns a random number to variable `n` each time it's executed and prints whether the number is positive, negative, or zero |
| `1-last_digit.c` | Program that prints the last digit of a randomly generated number and checks if it's greater than 5, less than 6 but not 0, or 0 |
| `2-print_alphabet.c` | Program that prints the alphabet in lowercase using the `putchar` function |
| `3-print_alphabets.c` | Program that prints the alphabet in lowercase, then in uppercase, followed by a new line using `putchar` |
| `4-print_alphabt.c` | Program that prints the alphabet in lowercase except the letters 'q' and 'e' |
| `5-print_numbers.c` | Program that prints all single-digit numbers of base 10 starting from 0 |
| `6-print_numberz.c` | Program that prints all single-digit numbers of base 10 starting from 0 using only `putchar` function |
| `7-print_tebahpla.c` | Program that prints the lowercase alphabet in reverse using `putchar` |
| `8-print_base16.c` | Program that prints all the numbers of base 16 (hexadecimal) in lowercase |
| `9-print_comb.c` | Program that prints all possible combinations of single-digit numbers separated by commas |
| `10-print_comb2.c` | Program that prints numbers from 00 to 99 separated by commas |

## Requirements

- All programs are compiled on Ubuntu 20.04 LTS using `gcc` with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code follows the Betty style guide
- No global variables are used
- Each file contains no more than 5 functions
- No use of functions like `printf`, `puts`, etc. - only `putchar`
- The prototypes of all functions are included in a header file called `main.h`

## Compilation and Usage

Programs can be compiled using gcc. For example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
```

Run the executable to see the output:

```
./0-positive_or_negative
```

This repository demonstrates fundamental concepts of the C programming language including variables, conditional statements, and loops, which are the building blocks for more complex programming concepts.

## Author

Stephane
```