#include <stdlib.h>

/**
 * free_grid - Libère la mémoire allouée pour une grille 2D.
 * @grid: Pointeur vers la grille 2D
 * @height: Nombre de lignes de la grille
 *
 * Description: Cette fonction libère la mémoire allouée pour chaque ligne
 * puis libère le tableau de pointeurs
 * 
 * Return: Si grid est NULL ou si height est inférieur ou égal à 0,
 * la fonction retourne immédiatement sans effectuer de libération
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
