#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - cherche un entier ds 1 tableau en use une fonction de comparaiso
 * @array: Tableau d'entiers
 * @size: Taille du tableau
 * @cmp: Pointeur vers une fonction de comparaison qui prend int et return int
 * Return: L'indice du premier élément pour luel cmp ne retourne pas 0
 * Retourne -1 si aucun élément ne correspond ou si size <=
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
