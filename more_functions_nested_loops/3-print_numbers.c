#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  function that checks for uppercase character
 *
 * Return: always
 */

void print_numbers(void)

{
	char num;

	for (num = 48; num <= 57; num++)
{
	putchar(num);
}
	putchar('\n');
}
