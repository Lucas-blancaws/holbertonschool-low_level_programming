#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Alloue un tableau de carac et l'initialise avec un carac
 * @size: La taille du tableau a allouer
 * @c: Le caractèr utiliser pour initialiser le table
 * Return: Pointer vers tableau alloe ou NULL
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
