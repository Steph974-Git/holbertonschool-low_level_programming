#include "main.h"
#include <stdio.h>

/**
 * puts2 -  prints a string, followed by a new line, to stdout
 * @str: I do not fear computers. I fear the lack of them - Isaac Asimov
 * Return: \n
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
