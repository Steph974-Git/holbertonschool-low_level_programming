# C - Pointers, arrays and strings

This project explores the fundamental concepts of pointers, arrays, and strings in C programming. You'll learn how to declare and use pointers, work with arrays, and manipulate strings through various functions and operations.

## Learning Objectives

- Understanding pointers and their implementation in C
- Working with memory addresses and dereferencing
- Differentiating between pointers and arrays
- Manipulating strings using pointers
- Understanding array notation and pointer arithmetic
- Learning the relationship between arrays and pointers
- Working with multidimensional arrays
- Implementing common string manipulation functions

## Tasks Overview

### 0. 98 Battery st.
**Update value using a pointer**

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

To solve this:
1. Accept a pointer to an integer as parameter
2. Use dereferencing to change the value at that memory address to 98

### 1. Don't swap horses in crossing a stream
**Swap integer values**

Write a function that swaps the values of two integers.

The solution involves:
1. Accepting two pointers to integers as parameters
2. Using a temporary variable to hold one value
3. Swapping the values using dereferencing

### 2. This report, by its very length, defends itself against the risk of being read
**Return the length of a string**

Create a function that returns the length of a string.

Implementation steps:
1. Accept a pointer to a character array (string)
2. Initialize a counter to zero
3. Iterate through the string until the null terminator is found
4. Return the final count

### 3. I do not fear computers. I fear the lack of them
**Print a string to stdout**

Write a function that prints a string, followed by a new line, to stdout.

The solution involves:
1. Accepting a string as parameter
2. Using a loop to iterate through each character
3. Printing each character using _putchar
4. Adding a newline character at the end

### 4. I can only go one way. I've not got a reverse gear
**Print a string in reverse**

Write a function that prints a string, in reverse, followed by a new line.

To solve this:
1. Find the string length
2. Print characters starting from the end and moving toward the beginning
3. Add a newline character at the end

### 5. A good engineer thinks in reverse
**Reverse a string**

Write a function that reverses a string.

The solution involves:
1. Finding the string length
2. Swapping characters from beginning and end, moving inward
3. Continue swapping until the middle of the string is reached

## Conclusion

Through this project, you'll gain a comprehensive understanding of pointers and their relationship with arrays and strings. These concepts form the foundation for more advanced C programming topics and are essential for memory management and data manipulation in C.