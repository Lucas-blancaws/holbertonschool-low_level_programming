#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range- Crée un tableau d'entiers contenant toutes les valeurs de mi max
 * min : la valeur minimale du tableau
 * max : la valeur maximale du tableau
 * Return: un pointeur vers le tableau alloué dynamiquemet
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return arr;
	free(arr);
}
