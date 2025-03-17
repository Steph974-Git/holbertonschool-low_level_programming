#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - Retourne la somme de a et b
 * @a: Le premier opérande
 * @b: Le second opérande
 * Return: La somme de a et b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Retourne la différence de a et b
 * @a: Le premier opérande
 * @b: Le second opérande
 * Return: La différence de a et b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Retourne le produit de a et b
 * @a: Le premier opérande
 * @b: Le second opérande
 * Return: Le produit de a et b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Retourne le résultat de la division de a par b
 * @a: Le premier opérande
 * @b: Le second opérande
 * Return: Le résultat de la division de a par b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -  Retourne le reste de la division de a par b
 * @a: Le premier opérande
 * @b: Le second opérande
 * Return: Le reste de la division de a par b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
