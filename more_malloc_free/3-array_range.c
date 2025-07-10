#include <stdlib.h>
#include "main.h"
/**
 * array_range - Retourne un tableau d'entiers de min à max inclus
 * @min: Valeur minimale
 * @max: Valeur maximale
 *
 * Return: Pointeur vers le tableau ou NULL en cas d’erreur
 */
int *array_range(int min, int max)
{
	int i;

	int *array;

	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (size));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
