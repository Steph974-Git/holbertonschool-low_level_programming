#include "main.h"
#include <stdio.h>

/**
 * puts_half -   prints half of a string
 * @str: 0123456789
 * Return: \n
 */

void puts_half(char *str)
{
	int start;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len / 2) + 1;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
	start++;
	}
	_putchar('\n');
}

