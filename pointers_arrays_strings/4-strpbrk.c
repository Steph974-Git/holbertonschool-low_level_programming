#include "main.h"
#include <stdio.h>

/**
* *_strpbrk -  changes all
* @s:  all lowercase letters
* @a: the character
* Return: Pointer to the memory area s
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *a = accept;
		while (*a)
	{
		if (*s == *a)
		return (s);
		a++;
		}
	s++;
	}
	return (NULL);
	}
