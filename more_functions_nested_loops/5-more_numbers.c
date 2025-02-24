#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  function that checks for uppercase character
 *
 * Return: always
 */

void more_numbers(void)

{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
{
	for (num2 = 0; num2 <= 14; num2++)
{
	if (num2 >= 10)

	_putchar('1');

	_putchar((num2 % 10) + '0');
}
	_putchar('\n');
}
}
