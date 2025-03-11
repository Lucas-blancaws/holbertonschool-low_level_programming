#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Alloue un tableau 2D d'entiers et l'initialise a 0
 * @width: Largeur du tableau
 * @height: Hauteur du tableau
 * Return: Pointeur vers le tableau ou NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int j, i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (k = 0; k < i; k++)
					free(grid[k]);
				free(grid);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
}
