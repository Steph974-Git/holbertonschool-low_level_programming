#include "main.h"
#include <stdio.h>

/**
 * *_strcat -  concatenates two strings
 * @dest: chaine receveur
 * @src:  chaine d'envoie
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{

int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
}
	dest[i] = '\0';
	return (dest);
}
