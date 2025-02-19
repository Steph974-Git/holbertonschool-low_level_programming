#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return:  the absolute value
 */

void times_table(void)

{
int a, b, resul;
	for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
{
	resul = a * b;

	if (b > 0)
{
	_putchar(',');
	_putchar(' ');

	if (resul < 10)
	_putchar(' ');
}
	if (resul >= 10)
{
	_putchar((resul / 10) + '0');
	_putchar((resul % 10) + '0');
}
	else
{
	_putchar(resul + '0');
}
}
	_putchar('\n');
}
}
