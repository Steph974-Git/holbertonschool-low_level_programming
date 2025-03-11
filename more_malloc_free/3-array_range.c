#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Alloue de la mémoire pour un tableau et initialise à zéro
 * @min: La valeur minimale de la plage
 * @max: La valeur maximale de la plage.
 * Return: return(array)
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;


return (array);
}
