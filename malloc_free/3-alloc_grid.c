#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - Crée un tableau de taille
 * @width: largeur du tableau
 * @height: hauteur du tableau
 * Return: ()
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0)
		return (NULL);

		if (height <= 0)
		return (NULL);

			grid = malloc(width * sizeof(int *));
			if (grid == 0)
				return (NULL);


}