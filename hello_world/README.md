# C - Hello, World

This project introduces the fundamentals of the C programming language, focusing on the compilation process, basic output functions, and coding standards. It covers essential topics such as preprocessing, compilation, linking, and understanding the structure of a C program.

## Learning Objectives

By the end of this project, you should be able to answer the following questions:
- Why is C programming awesome?
- Who invented C?
- Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds?
- What happens when you type `gcc main.c`?
- What is an entry point?
- What is `main`?
- How to print text using `printf`, `puts`, and `putchar`?
- How to get the size of a specific type using the `sizeof` operator?
- How to compile using `gcc`?
- What is the default program name when compiling with `gcc`?
- What is the official C coding style and how to check your code with `betty-style`?
- How to find the right header to include when using a standard library function?
- How does the `main` function influence the return value of the program?

## Tasks

### Mandatory Tasks

1. **Preprocessor**  
   - Write a script that runs a C file through the preprocessor and saves the result into another file.  
   - The C file name will be stored in the variable `$CFILE`.  
   - The output file should be named `c`.

2. **Compiler**  
   - Write a script that compiles a C file without linking.  
   - The output file should have the same name as the C file, but with a `.o` extension.

3. **Assembler**  
   - Write a script that generates the assembly code of a C file.  
   - The output file should have a `.s` extension.

4. **Name**  
   - Write a script that compiles a C file and creates an executable named `cisfun`.

5. **Hello, puts**  
   - Write a C program that prints `"Programming is like building a multilingual puzzle"` followed by a new line using the `puts` function.  
   - You must not use `printf`.

6. **Hello, printf**  
   - Write a C program that prints `"with proper grammar, but the outcome is a piece of art,"` using `printf`.  
   - Your program should return `0` and compile without warnings using `-Wall`.

7. **Size is not grandeur, and territory does not make a nation**  
   - Write a C program that prints the sizes of various data types on the computer it is compiled and run on.

### Advanced Tasks

8. **What happens when you type `gcc main.c`**  
   - Write a blog post explaining the compilation process with examples.  
   - Publish it on Medium or LinkedIn and share the link.

9. **Intel**  
   - Write a script that generates the assembly code (Intel syntax) of a C file.

10. **UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**  
    - Write a C program that prints `"and that piece of art is useful" - Dora Korpar, 2015-10-19"` to standard error.  
    - You must not use `printf` or `puts`.  
    - Your program should return `1` and compile without warnings using `-Wall`.

## Requirements

- All C files should be compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
- The Betty coding style should be followed (`betty-style` and `betty-doc`).
- No global variables are allowed.
- Allowed functions: `printf`, `puts`, `putchar`.

## Author
Stéphane

