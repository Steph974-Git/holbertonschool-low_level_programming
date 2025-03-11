#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Alloue de la mémoire
 * @s1: Première chaîne à concaténer.
 * @s2: Deuxième chaîne à concaténer.
 * @n: Nombre maximal de caractères à concaténer de la chaîne s2
 * Return: return(sxs)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *sxs;

	if (s1 == NULL)
		s1 = "";

		if (s2 == NULL)
		s2 = "";

			while (s1[len1] != '\0')
				len1++;

				while (len2 < n && s2[len2] != '\0')
					len2++;


		sxs = malloc((len1 + len2 + 1) * sizeof(char));
		if (sxs == NULL)
			return (NULL);

			for (j = 0; j < len1; j++)
			{
			sxs[j] = s1[j];
			}
			for (i = 0; i < len2; i++)
			{
			sxs[len1 + i] = s2[i];
			}
			sxs[len1 + len2] = '\0';

	return (sxs);
}
