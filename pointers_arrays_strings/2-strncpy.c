#include "main.h"
#include <stdio.h>

/**
 * *_strncpy -  function that copies a string
 * @dest: chaine receveur
 * @src:  chaine d'envoie
 * @n: premiers n caractères
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{

int j = 0;

	while (src[j] != '\0' && j < n)
{
	dest[j] = src[j];
	j++;
}
	while (j < n)
	{
	dest[j] = '\0';
		j++;
}
	return (dest);
}
