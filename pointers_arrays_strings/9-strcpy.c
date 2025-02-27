#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -   string pointed to by src
 * @dest: the pointer
 * @src:  string pointed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{

int length = 0;

	while (src[length] != '\0')
	{
	dest[length] = src[length];
	length++;
	}
	dest[length] = '\0';
	return (dest);
}
