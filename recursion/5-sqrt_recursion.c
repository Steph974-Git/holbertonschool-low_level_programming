#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n,int i)

{
	int i = 1;

	if (n < 0)
		return (-1);

	else if (i * i > n)
                return (-1);

	else if (n == 0)
		return (0);

	else if (i * i == n)
		return (i);

	return _sqrt_recursion(n, i + 1);
}
