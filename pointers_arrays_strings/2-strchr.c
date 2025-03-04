#include "main.h"
#include <stdio.h>

/**
* *_strchr -  Locate the first occurrence of a character in a string
* @s:  th string to search in
* @c: the character to find
* Return: Pointer to the memory area s
*/

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (NULL);

	if (c == '\0')
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
}
	return (NULL);
}
