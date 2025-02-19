#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check if it's alphabetic
 * Return: Always (Success)
 */

int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
