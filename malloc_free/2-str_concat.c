#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Crée un tableau de taille
 * @s1: chaine a copier
 * @s2: chaine aussi
 * Return: (sxs)
 */


char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	char *sxs;

	if (s1 == NULL)
		s1 = "";

		if (s2 == NULL)
		s2 = "";

			while (s1[len1] != '\0')
			len1++;

				while (s2[len2] != '\0')
				len2++;

		sxs = malloc((len1 + len2 + 1) * sizeof(char));
		if (sxs == NULL)
		return (NULL);

		for (i = 0; i < len1; i++)
		{
		sxs[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
		sxs[len1 + j] = s2[j];
		}
	sxs[len1 + len2] = '\0';

	return (sxs);
}
