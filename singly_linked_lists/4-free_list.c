#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - Frees a list_t list
* @head: Pointer to the head of the list
*
* Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;
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