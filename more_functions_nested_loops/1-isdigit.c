#include "main.h"
#include <ctype.h>

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c:  is  is a digit
 * Return: 1 ic c or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
{
	return (1);
}
	else
{
	return (0);
}
}
