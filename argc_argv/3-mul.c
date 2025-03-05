#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme qui multiplie deux nombres passés en arguments
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Return: 0 si l'exécution est réussie, 1 en cas d'erreur
 */

int main(int argc, char *argv[])

{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
