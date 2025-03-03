#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: The constant byte to fill the memory with
 * @src: Pointer to the memory area to be filled
 * @n: The number of bytes to be set
 *  Return : Pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
