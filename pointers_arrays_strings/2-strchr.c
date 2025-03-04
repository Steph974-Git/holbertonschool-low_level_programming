#include "main.h"
#include <stddef.h>

/**
* *_strchr -  Locate the first occurrence of a character in a string
* @s:  the string source
* @c: the character to find
* Return: Pointer to the memory area s
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
