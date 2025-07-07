#include "main.h"
#include <stdlib.h>

/**
 * create_array - creer un tableau de caractères et l'iitia
 * @size: taille du tableau
 * @c: le caractèe dans tableau
 *
 * Return: pointeur vers tableau
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

