#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Crée un tableau de taille donnée et l'initialise avec c
 * @str: chaine a copier
 * Return: (copy)
 */


 char *str_concat(char *s1, char *s2)
{
	int i;
	int len = strlen(str);
	char *copy;

	if (str == NULL)
		return (NULL);

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