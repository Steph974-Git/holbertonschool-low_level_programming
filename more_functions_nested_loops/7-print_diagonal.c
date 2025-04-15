#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n:  is the number of times
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int idx1, idx2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (idx1 = 0; idx1 < n; idx1++)
		{
			for (idx2 = 0; idx2 < idx1; idx2++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
