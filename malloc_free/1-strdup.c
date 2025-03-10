#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Crée un tableau de taille donnée et l'initialise avec c
 * @str: chaine a copier
 * Return: (copy)
 */


char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		{
			len++;
		}

	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		{
		copy[i] = str[i];
		}

	copy[len] = '\0';

return (copy);
}
