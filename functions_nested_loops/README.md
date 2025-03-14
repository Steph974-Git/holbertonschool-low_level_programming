# C - Functions, nested loops

This project explores the fundamental concepts of functions and nested loops in C programming. You'll learn how to declare, define, and use functions, as well as how to implement nested loops for more complex iteration tasks.

## Learning Objectives

- Understanding functions and their implementation
- Working with nested loops
- Differentiating between function declarations and definitions
- Using function prototypes
- Understanding variable scope
- Working with compiler flags
- Using header files properly

## Tasks Overview

### 0. _putchar
**Print a string using _putchar**

Write a program that prints `_putchar`, followed by a new line.

To solve this:
1. Include the main function
2. Use _putchar to print each character individually
3. End with a newline character

### 1. I sometimes suffer from insomnia
**Print the alphabet**

Write a function that prints the lowercase alphabet followed by a new line.

The solution involves:
1. Creating a loop that iterates from 'a' to 'z'
2. Using _putchar to print each character
3. Adding a newline character at the end

### 2. 10 x alphabet
**Print the alphabet 10 times**

Create a function that prints the alphabet 10 times using a nested loop:
1. Outer loop runs 10 times
2. Inner loop prints the alphabet (can call the previous function)
3. Each alphabet set ends with a newline

### 3. islower
**Check for lowercase character**

Implement a function that checks if a character is lowercase:
1. Compare the character with ASCII range for lowercase letters ('a' to 'z')
2. Return 1 if lowercase, 0 otherwise

### 4. isalpha
**Check for alphabetic character**

Create a function that determines if a character is alphabetic:
1. Check if the character is in either lowercase or uppercase range
2. Return 1 if alphabetic, 0 otherwise

### 5. Sign
**Print and return sign of a number**

Write a function that prints and returns the sign of a number:
1. For positive numbers, print '+' and return 1
2. For zero, print '0' and return 0
3. For negative numbers, print '-' and return -1

### 6. Absolute value
**Compute absolute value**

Create a function that returns the absolute value of an integer:
1. If number is negative, negate it
2. Otherwise return the number as is

### 7. Last digit
**Print and return last digit**

Implement a function that handles the last digit of a number:
1. Use modulo 10 to extract the last digit
2. Handle negative numbers by taking the absolute value of the digit
3. Print and return the last digit

### 8. Jack Bauer
**Print every minute of the day**

Write a function that prints every minute from 00:00 to 23:59:
1. Use nested loops for hours (0-23) and minutes (0-59)
2. Format each line as HH:MM followed by a newline

### 9. Times table
**Print 9 times table**

Create a function that prints the multiplication table for 0-9:
1. Use nested loops for rows and columns
2. Format the output with proper spacing and commas
3. Handle single and double-digit numbers differently

### 10. Add
**Add two integers**

Implement a simple function that adds two integers and returns the result.

### 11. Print to 98
**Print numbers from n to 98**

Write a function that prints all numbers from a given starting point to 98:
1. If starting number is less than 98, count up
2. If starting number is greater than 98, count down
3. Format output with commas and spaces

## Conclusion

This project reinforces the fundamental concepts of function creation and loop implementation in C programming. These skills are essential building blocks for more complex programming tasks and will be used throughout your programming journey.