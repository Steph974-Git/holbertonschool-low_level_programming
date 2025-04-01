#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data in the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	{
		int count = 0;

		if (head == NULL)
			return (0);

		while (head != NULL)
		{
			count += head->n;
			head = head->next;
		}
		return (count);
	}

}
