#include "main.h"
#include <stdio.h>

/**
* factorial - alcule la longueur d'une chaîne
* @n: is
* Return: 0
*/

int factorial(int n)

{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
