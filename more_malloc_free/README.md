# C - More malloc, free

This project delves deeper into dynamic memory allocation in C programming using `malloc`, `free`, and related functions. You'll learn advanced memory management techniques and how to efficiently handle memory in your programs.

## Learning Objectives

- Using `malloc` to dynamically allocate memory
- Using `calloc` for zero-initialized memory allocation
- Using `realloc` to resize previously allocated memory blocks
- Implementing proper memory management with `free`
- Handling memory allocation failures gracefully
- Understanding memory leaks and how to prevent them
- Working with memory blocks of specific sizes

## Tasks Overview

### 0. Trust no one
**Allocate memory using malloc**

Write a function that allocates memory using `malloc`.

To solve this:
1. Create a function that accepts a size parameter
2. Allocate memory of the specified size using `malloc`
3. Check if the allocation was successful
4. Return a pointer to the allocated memory or NULL if it fails

### 1. string_nconcat
**Concatenate two strings with limited bytes**

Write a function that concatenates two strings, using at most n bytes from the second string.

Implementation steps:
1. Allocate memory for the concatenated string
2. Check if allocation was successful
3. Copy the first string entirely
4. Copy up to n bytes from the second string
5. Add null terminator and return the new string

### 2. _calloc
**Allocate memory for an array with calloc**

Write a function that allocates memory for an array using `calloc`.

The solution involves:
1. Calculate the total memory size needed
2. Allocate memory using `calloc` to get zero-initialized memory
3. Return a pointer to the allocated memory or NULL if it fails

### 3. array_range
**Create an array of integers**

Write a function that creates an array of integers containing values from min to max, inclusive.

To solve this:
1. Check if min > max and return NULL if true
2. Calculate the array size needed
3. Allocate memory for the array using `malloc`
4. Fill the array with values from min to max
5. Return the pointer to the newly created array

### 4. _realloc (Advanced)
**Reallocate a memory block**

Write a function that reallocates a memory block using `malloc` and `free`.

The solution involves:
1. Handle special cases like NULL pointers or zero# C - More malloc, free

This project delves deeper into dynamic memory allocation in C programming using `malloc`, `free`, and related functions. You'll learn advanced memory management techniques and how to efficiently handle memory in your programs.

## Learning Objectives

- Using `malloc` to dynamically allocate memory
- Using `calloc` for zero-initialized memory allocation
- Using `realloc` to resize previously allocated memory blocks
- Implementing proper memory management with `free`
- Handling memory allocation failures gracefully
- Understanding memory leaks and how to prevent them
- Working with memory blocks of specific sizes

## Tasks Overview

### 0. Trust no one
**Allocate memory using malloc**

Write a function that allocates memory using `malloc`.

To solve this:
1. Create a function that accepts a size parameter
2. Allocate memory of the specified size using `malloc`
3. Check if the allocation was successful
4. Return a pointer to the allocated memory or NULL if it fails

### 1. string_nconcat
**Concatenate two strings with limited bytes**

Write a function that concatenates two strings, using at most n bytes from the second string.

Implementation steps:
1. Allocate memory for the concatenated string
2. Check if allocation was successful
3. Copy the first string entirely
4. Copy up to n bytes from the second string
5. Add null terminator and return the new string

### 2. _calloc
**Allocate memory for an array with calloc**

Write a function that allocates memory for an array using `calloc`.

The solution involves:
1. Calculate the total memory size needed
2. Allocate memory using `calloc` to get zero-initialized memory
3. Return a pointer to the allocated memory or NULL if it fails

### 3. array_range
**Create an array of integers**

Write a function that creates an array of integers containing values from min to max, inclusive.

To solve this:
1. Check if min > max and return NULL if true
2. Calculate the array size needed
3. Allocate memory for the array using `malloc`
4. Fill the array with values from min to max
5. Return the pointer to the newly created array

### 4. _realloc (Advanced)
**Reallocate a memory block**

Write a function that reallocates a memory block using `malloc` and `free`.

The solution involves:
1. Handle special cases like NULL pointers or zero