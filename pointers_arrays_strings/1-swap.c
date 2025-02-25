#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: value it points to 98
 * @b: value it point to 42
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
