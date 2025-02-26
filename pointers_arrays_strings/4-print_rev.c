#include "main.h"
#include <stdio.h>

/**
 * print_rev  -   prints a string, in reverse
 * @str: vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
 * Return: \n
 */

void print_rev(char *str)

{
	int end = 0;

	while (str[end] != '\0')
		end++;
	end--;

	while (end >= 0)
	{
		_putchar(str[end]);
		end--;
}
	_putchar('\n');
}
