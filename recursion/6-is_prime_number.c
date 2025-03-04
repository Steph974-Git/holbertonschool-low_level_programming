#include "main.h"
#include <stdio.h>

/**
 * _helper - Fonction récursive pour vérifier si un nombre est premier.
 * @n: Le nombre à tester.
 * @x: Le diviseur actuel testé
 * Return: 1 si le nombre est premier, 0 sinon
 */

int _helper(int n, int x)

{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % x == 0)
		return (0);
	else if (x * x > n)
		return (1);
	return (_helper(n, x + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est premier
 * @n: Le nombre à tester
 * Return: 1 si le nombre est premier, 0 sinon
 */

int is_prime_number(int n)
{
	return (_helper(n, 2));
}
