#include "function_pointers.h"
/**
 * array_iterator - Exécute une fnction sur chaque éléme du tableau
 * @array: Le tableau d'entiers
 * @size: La taille du tableau
 * @action: Pointeur vers une fonction qui prend un int et return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
