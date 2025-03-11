#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Alloue de la mémoire pour un tableau et initialise à zéro
 * @nmemb: Le nombre d'éléments dans le tableau
 * @size: La taille de chaque élément en octets.
 * Return: return(ptr)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
		if (ptr == 0)
			return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
