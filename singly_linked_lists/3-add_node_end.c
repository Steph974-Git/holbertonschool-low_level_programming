#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int lenght = 0;
	list_t *tailnode = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	while (str[lenght] != '\0')
	{
		lenght++;
	}

	new->str = strdup(str);
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (tailnode->next != NULL)
			tailnode = tailnode->next;
		tailnode->next = new;
	}

	return (new);
}
