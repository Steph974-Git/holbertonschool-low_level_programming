# Malloc and Free in C Programming

## Overview
This project explores dynamic memory allocation in C programming using `malloc` and `free` functions. Understanding these concepts is crucial for efficient memory management in C programs where memory requirements aren't known at compile time.

## Learning Objectives

By the end of this project, you should be able to:

* Explain the difference between automatic and dynamic memory allocation
* Use `malloc` to allocate memory dynamically at runtime
* Use `free` to properly deallocate memory when it's no longer needed
* Understand what happens in memory when allocating and freeing space
* Implement proper memory management techniques to avoid common issues:
  * Memory leaks
  * Dangling pointers
  * Double freeing
  * Buffer overflows

## Key Concepts

### Automatic vs Dynamic Allocation

* **Automatic Allocation**: Memory allocated on the stack during compile time
  * Variables declared inside functions
  * Fixed size determined at compile time
  * Automatically freed when the variable goes out of scope

* **Dynamic Allocation**: Memory allocated on the heap during runtime
  * Size can be determined at runtime
  * Memory persists until explicitly deallocated
  * Programmer is responsible for memory management

### Function Reference

1. **malloc**
   ```c
   void *malloc(size_t size);
   ```
   * Allocates `size` bytes of memory
   * Returns a pointer to the allocated memory, or NULL if allocation fails
   * Memory is not initialized (contains garbage values)

2. **free**
   ```c
   void free(void *ptr);
   ```
   * Deallocates memory previously allocated by `malloc`
   * Takes a pointer to the memory block to free
   * Does nothing if `ptr` is NULL

### Project Files

* **0-create_array.c**: Creates an array of chars and initializes it with a specific character
* **1-strdup.c**: Returns a pointer to a newly allocated space in memory containing a copy of a string
* **2-str_concat.c**: Concatenates two strings into a newly allocated memory
* **3-alloc_grid.c**: Returns a pointer to a 2D array of integers
* **4-free_grid.c**: Frees a 2D grid previously created by alloc_grid

## Common Pitfalls

1. **Memory Leaks**: Forgetting to free allocated memory
2. **Dangling Pointers**: Using a pointer after freeing its memory
3. **Double Free**: Freeing the same memory block twice
4. **Buffer Overflow**: Writing beyond the allocated memory block
5. **Using Uninitialized Memory**: Reading from allocated memory before writing to it

## Debugging Tools

* **Valgrind**: A powerful tool for memory debugging and leak detection
  ```bash
  valgrind --leak-check=full ./your_program
  ```

## Examples

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Dynamic allocation of an integer array */
    int *array;
    int size = 5;
    int i;
    
    /* Allocate memory */
    array = malloc(size * sizeof(int));
    
    /* Check if malloc was successful */
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    
    /* Use the allocated memory */
    for (i = 0; i < size; i++)
    {
        array[i] = i + 1;
        printf("%d ", array[i]);
    }
    printf("\n");
    
    /* Free the allocated memory when done */
    free(array);
    
    return (0);
}
```

## Compilation

To compile any file in this project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file_name.c -o output_name
```

## Author

Stephane - Holberton School

---