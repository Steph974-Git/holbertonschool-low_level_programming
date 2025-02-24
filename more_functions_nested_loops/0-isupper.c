#include "main.h"
#include <ctype.h>

/**
 * _isupper -  function that checks for uppercase character
 * @c:  is uppercase
 * Return: 1 ic c or 0
 */

int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
{
	return (1);
}
	else
{
	return (0);
}
}
