#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Alloue de la mémoire en vérifiant l'échec de malloc
 * @b: taille en octets
 * Return: return(i)
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
