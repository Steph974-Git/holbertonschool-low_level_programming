# Singly Linked Lists

## Description
This project implements a singly linked list data structure in C. A singly linked list is a linear data structure where each element (node) contains data and a pointer to the next node in the sequence.

## Files
- **0-print_list.c**: A function that prints all the elements of a `list_t` list
- **1-list_len.c**: A function that returns the number of elements in a `list_t` list
- **2-add_node.c**: A function that adds a new node at the beginning of a `list_t` list
- **3-add_node_end.c**: A function that adds a new node at the end of a `list_t` list
- **4-free_list.c**: A function that frees a `list_t` list

## Data Structure
The structure used for the linked list is defined as follows:
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

## Functions

### print_list
```c
size_t print_list(const list_t *h);
```
- Prints all elements of a linked list
- Returns the number of nodes
- If `str` is NULL, prints `[0] (nil)`

### list_len
```c
size_t list_len(const list_t *h);
```
- Returns the number of elements in a linked list

### add_node
```c
list_t *add_node(list_t **head, const char *str);
```
- Adds a new node at the beginning of a linked list
- Returns the address of the new element, or NULL if it failed
- Duplicates the string `str`

### add_node_end
```c
list_t *add_node_end(list_t **head, const char *str);
```
- Adds a new node at the end of a linked list
- Returns the address of the new element, or NULL if it failed
- Duplicates the string `str`

### free_list
```c
void free_list(list_t *head);
```
- Frees all memory allocated for a linked list
- Properly frees both the node and the string inside each node

## Memory Management
This implementation properly manages memory:
- All dynamically allocated memory is freed when no longer needed
- The program has been tested with Valgrind to ensure no memory leaks

## Compilation
All files are compiled using gcc with the following flags:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Usage Example
```c
#include "lists.h"

int main(void)
{
	list_t *head = NULL;
	
	add_node(&head, "Hello");
	add_node(&head, "World");
	print_list(head);
	free_list(head);
	
	return (0);
}
```
