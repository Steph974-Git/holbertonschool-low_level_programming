#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the number
 * Return: always
 */

void print_line(int n)

{
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	_putchar('\n');
}
