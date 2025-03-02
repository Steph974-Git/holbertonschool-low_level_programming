#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi -  Convertit une chaîne en entier
 * @s: La chaîne de caractères à convertir
 * Return: Entier
 */

	int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		sign *= -1;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	if (result > (INT_MAX / 10) ||
	(result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
	return (result * sign);
}
