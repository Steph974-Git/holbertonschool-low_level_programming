#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a square
 * @size:  is the size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)

{
	int idx1, idx2, space;

	if (size <= 0)
{
	_putchar('\n');
}
	for (idx1 = 0; idx1 < size; idx1++)
		{
	for (space = 0; space < size - idx1 - 1; space++)
		{
	_putchar(' ');
}
	for (idx2 = 0; idx2 < idx1 + 1; idx2++)
		{
	_putchar('#');
}
	_putchar('\n');
}
}
