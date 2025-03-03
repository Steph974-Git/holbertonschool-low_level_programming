#include "main.h"
#include <stdio.h>

/**
* *_strchr -  changes all
* @s:  all lowercase letters
* @c: the character
* Return: Pointer to the memory area s
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
retunr (s);
s++;
}
return (NULL);
}