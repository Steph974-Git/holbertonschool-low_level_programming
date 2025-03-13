C - More functions, more nested loops

Learning Objectives

At the end of this project, you should be able to explain the following concepts:

General

Nested loops: Loops inside other loops, useful for handling multi-dimensional structures or repeated patterns.

Functions: Blocks of reusable code that perform a specific task, improving modularity and readability.

Function declaration vs. definition: The declaration tells the compiler about the function's existence, while the definition provides the actual implementation.

Prototype: A function's declaration, specifying its return type and parameters, usually found in header files.

Variable scope: Determines where a variable can be accessed (global, local, or block scope).

GCC flags:

-Wall: Enables most warning messages.

-Werror: Treats warnings as errors.

-pedantic: Ensures strict compliance with the C standard.

-Wextra: Enables additional warnings.

-std=gnu89: Uses the GNU89 standard for C.

Header files (#include): Used to define function prototypes, macros, and shared declarations for better code organization.

Tasks

0. isupper

Objective: Implement a function that checks if a given character is an uppercase letter.

Steps to complete:

Create a function that takes a single character as an argument.

Check if the character is within the uppercase ASCII range ('A' to 'Z').

Return a value of 1 if the character is uppercase; otherwise, return 0.

1. isdigit

Write a function that checks if a given character is a digit (0-9).

Steps to complete:

Define a function that takes a single character as input.

Check if the character falls within the ASCII range of digits ('0' to '9').

Return 1 if the character is a digit; otherwise, return 0.

2. mul

Write a function that multiplies two integers.

Steps to complete:

Create a function that takes two integer parameters.

Multiply the two integers.

Return the result of the multiplication.

3. The numbers speak for themselves

Write a function that prints the numbers from 0 to 9.

Steps to complete:

Create a function that iterates through numbers from 0 to 9.

Use _putchar to print each digit as a character.

Ensure the function only uses _putchar a maximum of two times.

Tasks

4. I believe in numbers and signs

Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_most_numbers(void);

Do not print 2 and 4

You can only use _putchar twice in your code

5. Numbers constitute the only universal language

Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

Prototype: void more_numbers(void);

You can only use _putchar three times in your code

6. The shortest distance between two points is a straight line

Write a function that draws a straight line in the terminal.

Prototype: void print_line(int n);

You can only use _putchar function to print

Where n is the number of times the character _ should be printed

The line should end with a \n

If n is 0 or less, the function should only print \n

7. I feel like I am diagonally parked in a parallel universe

Write a function that draws a diagonal line on the terminal.

Prototype: void print_diagonal(int n);

You can only use _putchar function to print

Where n is the number of times the character \ should be printed

The diagonal should end with a \n

If n is 0 or less, the function should only print a \n

8. You are so much sunshine in every square inch

Write a function that prints a square, followed by a new line.

Prototype: void print_square(int size);

You can only use _putchar function to print

Where size is the size of the square

If size is 0 or less, the function should print only a new line

Use the character # to print the square

9. Fizz-Buzz

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

Each number or word should be separated by a space

You are allowed to use the standard library

10. Triangles

Write a function that prints a triangle, followed by a new line.

Prototype: void print_triangle(int size);

You can only use _putchar function to print

Where size is the size of the triangle

If size is 0 or less, the function should print only a new line

Use the character # to print the triangle

