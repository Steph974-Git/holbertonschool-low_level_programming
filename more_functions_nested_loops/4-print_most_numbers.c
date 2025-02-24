#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  function that checks for uppercase character
 *
 * Return: always
 */

void print_most_numbers(void)

{
	char num;

	for (num = 48; num <= 57; num++)

	if (num != 50 && num != 52)
{
	_putchar(num);
}
	_putchar('\n');
}
