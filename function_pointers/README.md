# Function Pointers in C

This repository contains a collection of C programs that demonstrate the use of function pointers in the C programming language.

## Files and Descriptions

| File | Description |
| ---- | ----------- |
| `function_pointers.h` | Header file containing function prototypes for all functions in the project |
| `0-print_name.c` | Function that prints a name using a function pointer |
| `1-array_iterator.c` | Function that executes a function on each element of an array |
| `2-int_index.c` | Function that searches for an integer using a comparison function |
| `3-main.c` | Entry point for a simple calculator program |
| `3-op_functions.c` | File containing 5 functions for basic mathematical operations |
| `3-get_op_func.c` | Function that selects the correct function to perform the operation |
| `3-calc.h` | Header file containing all function prototypes and data structures for calculator program |
| `100-main_opcodes.c` | Program that prints the opcodes of its own main function |

## Function Descriptions

### `void print_name(char *name, void (*f)(char *))`
- Prints a name using a function pointer
- `name` is the string to print
- `f` is a pointer to the function that will format and print the name

### `void array_iterator(int *array, size_t size, void (*action)(int))`
- Executes a function on each element of an array
- `array` is a pointer to the array
- `size` is the size of the array
- `action` is a pointer to the function to be applied on each element

### `int int_index(int *array, int size, int (*cmp)(int))`
- Searches for an integer in an array
- `array` is a pointer to the array
- `size` is the number of elements in the array
- `cmp` is a pointer to the function used to compare values
- Returns the index of the first element for which `cmp` does not return 0
- Returns -1 if no element matches or if size <= 0

### Calculator Program (Files 3-*)
- A simple calculator that performs basic operations: addition, subtraction, multiplication, division, and modulo
- Consists of multiple files:
  - `3-calc.h`: Contains function prototypes and structures
  - `3-op_functions.c`: Contains 5 functions that perform basic operations
  - `3-get_op_func.c`: Contains the function that selects the correct operation
  - `3-main.c`: Contains the main function for the calculator

### `100-main_opcodes.c`
- Advanced program that prints the opcodes of its own main function
- Takes a number as a parameter (number of bytes to print)
- Demonstrates how to access and print the machine code of a function

## Compilation and Usage

Each program or function can be compiled with its corresponding main file. For example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o print_name
```

For the calculator program:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

Run the executable to see the output:

```
./print_name
```

For the calculator:

```
./calc 10 + 20
```

This repository demonstrates the powerful concept of function pointers in C programming, allowing for dynamic selection and execution of functions at runtime.