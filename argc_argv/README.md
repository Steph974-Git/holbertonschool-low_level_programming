C - argc, argv

This project focuses on handling command-line arguments in C programs using the `argc` and `argv` parameters of the `main` function.

## Concepts

- `argc`: Argument count - the number of command-line arguments passed to the program (including the program name)
- `argv`: Argument vector - an array of strings containing the actual arguments

## Tasks

### 0. It ain't what they call you, it's what you answer to

**Objective**: Write a program that prints its name.

**Approach**:
- Use `argv[0]` which contains the program name (including path)
- Print this value using `printf` or `puts`
- No need to handle the renaming case specially - `argv[0]` will automatically contain the new name

### 1. Silence is argument carried out by other means

**Objective**: Print the number of arguments passed to the program.

**Approach**:
- Simply print the value of `argc - 1` (subtract 1 because `argc` includes the program name)
- Remember that `argc` itself gives the total count of elements in `argv`

### 2. The best argument against democracy is a five-minute conversation with the average voter

**Objective**: Print all arguments received by the program.

**Approach**:
- Loop through the `argv` array from index 0 to `argc - 1`
- Print each string stored in the array on a new line
- Use a simple for loop with `printf` or `puts`

### 3. Neither irony nor sarcasm is argument

**Objective**: Multiply two numbers passed as arguments.

**Approach**:
- Check if `argc` equals 3 (program name + 2 numbers)
- If not, print "Error" and return 1
- Convert `argv[1]` and `argv[2]` to integers using `atoi()`
- Multiply the numbers and print the result
- Remember to include the `stdlib.h` header for `atoi()`

### 4. To infinity and beyond

**Objective**: Add positive numbers passed as arguments.

**Approach**:
- If no arguments are provided (`argc == 1`), print 0
- Loop through each argument starting from index 1
- For each argument:
  - Check if it contains only digits (loop through each character and use `isdigit()` from `ctype.h`)
  - If non-digits are found, print "Error" and return 1
  - Otherwise, convert to integer using `atoi()` and add to sum
- Print the final sum
- Ensure to include appropriate headers (`stdlib.h` for `atoi()` and `ctype.h` for `isdigit()`)

## Compilation

Compile your programs with:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename>.c -o <output>
```

Remember: focus on understanding how `argc` and `argv` allow your program to interact with command-line arguments!
