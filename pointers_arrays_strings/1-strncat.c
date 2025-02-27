#include "main.h"
#include <stdio.h>

/**
 * *_strncat -  concatenates two strings
 * @dest: chaine receveur
 * @src: chaine d'envoie
 * @n: premiers caractères de src à dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{

int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
}
	dest[i] = '\0';
	return (dest);
}
