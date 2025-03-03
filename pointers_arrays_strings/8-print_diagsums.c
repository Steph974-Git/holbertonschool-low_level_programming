#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* @a: Somme 1
* @size: somme 2
* Return: aucun
*/

void print_diagsums(int *a, int size)

{
	int i;
	int resu1 = 0;
	int resu2 = 0;

	for (i = 0; i < size; i++)
	{
	resu1 += a[i * size + i];
	resu2 += a[i * size + (size - 1 - i)];
	}
printf("%d, %d\n", resu1, resu2);
}
