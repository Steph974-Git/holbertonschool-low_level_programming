#include "main.h"
#include <stdio.h>

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: I do not fear computers. I fear the lack of them - Isaac Asimov
 * Return: i
 */

void _puts(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
