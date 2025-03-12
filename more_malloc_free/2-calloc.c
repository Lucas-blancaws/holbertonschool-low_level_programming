#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allou mémoir for tableau d nmemb size et initialise la mémo
 * @nmemb: Nombre d'�léments dans le tabl
 * @size: Taille de chaques é�men
 * Return: Pointeur vers la mémoire all� ou NULL si nmemb ou size est ég
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
