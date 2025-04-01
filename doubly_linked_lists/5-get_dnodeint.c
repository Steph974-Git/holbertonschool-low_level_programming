#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return, starting from 0
 *
 * Return: Pointer to the node at specified index, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
