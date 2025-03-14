# C - Structures, typedef

This project explores the use of structures and typedef in C programming. Structures allow grouping different data types under a single name, while typedef creates aliases for existing data types, making code more readable and maintainable.

## Learning Objectives

- Understanding structure declarations in C
- When and how to use structures
- How to define and use typedef to create type aliases

## Tasks Overview

### 0. Poppy
**Define a structure for a dog**

Create a structure called `struct dog` with three elements:
- `name` (character pointer for the dog's name)
- `age` (float for the dog's age)
- `owner` (character pointer for the owner's name)

To solve this, define the structure in a header file (dog.h), making sure to include appropriate include guards.

### 1. A dog is the only thing on earth that loves you more than you love yourself
**Initialize a dog structure**

Implement a function that initializes a variable of type `struct dog`.
- Function prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

The solution involves checking if the pointer is valid, then assigning the provided values to the structure's members.

### 2. A dog will teach you unconditional love
**Print a dog structure**

Create a function that prints the contents of a `struct dog`.
- Function prototype: `void print_dog(struct dog *d);`
- Handle NULL elements by printing "(nil)" in place of NULL values
- If the structure pointer is NULL, print nothing

Use printf to display each field, with appropriate checks for NULL pointers.

### 3. Outside of a dog, a book is a man's best friend
**Create a type alias**

Define a new type `dog_t` as an alias for the `struct dog` type.

This requires using the typedef keyword to create the alias in your header file.

### 4. A door is what a dog is perpetually on the wrong side of
**Create a new dog**

Write a function that creates a new dog structure dynamically.
- Function prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Make copies of the name and owner strings
- Return NULL if memory allocation fails

This requires:
1. Allocating memory for the structure
2. Creating copies of the name and owner strings
3. Proper error handling for memory allocation failures

### 5. How many legs does a dog have
**Free memory for dog structures**

Implement a function that frees the memory used by a dog structure.
- Function prototype: `void free_dog(dog_t *d);`

The solution should:
1. Check if the pointer is valid
2. Free the memory allocated for strings
3. Free the structure itself

## Conclusion

This project demonstrates how to use structures to group related data and typedef to make code more readable. It emphasizes memory management, particularly when dealing with structures that contain dynamically allocated components.