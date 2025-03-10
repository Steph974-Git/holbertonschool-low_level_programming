#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  free_grid- Crée un tableau 2D d'entiers initialisé à 0
 * @grid: largeur du tableau
 * @height: hauteur du tableau
 * Return: pointeur vers le tableau ou NULL en cas d'échec
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
