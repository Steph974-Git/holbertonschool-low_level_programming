#include "main.h"
#include <stdio.h>

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

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
		sign *= -1;
	i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	i++;
	}
	return (result * sign);
}
