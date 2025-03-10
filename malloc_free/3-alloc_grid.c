#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Crée un tableau 2D d'entiers initialisé à 0
 * @width: largeur du tableau
 * @height: hauteur du tableau
 * Return: pointeur vers le tableau ou NULL en cas d'échec
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;


	if (width <= 0 || height <= 0)
		return (NULL);


	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{

			while (i-- > 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
