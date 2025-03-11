#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Libère une grille 2Dalouer par alloc_grid.
 * @grid: Pointeur vers la grille 2D.
 * @height: Nombre de lignes dans la grille.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
