#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @b: The constant byte to fill the memory with
 * @s: Pointer to the memory area to be filled
 * @n: The number of bytes to be set
 *  Return : Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}