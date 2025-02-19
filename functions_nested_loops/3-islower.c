#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: The character to check if it's lowercase
 * Return: Always (Success)
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
