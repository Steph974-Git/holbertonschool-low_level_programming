#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size:  is the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int idx1, idx2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (idx1 = 0; idx1 < size; idx1++)
		{
			for (idx2 = 0; idx2 < size; idx2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
