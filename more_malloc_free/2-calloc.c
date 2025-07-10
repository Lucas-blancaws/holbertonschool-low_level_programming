#include <stdio.h>
#include "main.h"
/**
* _memset - check the code for
* @s: pointeur
* @b: char
* @n: nombre
*
* Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un tableau et l'initialise
 * @nmemb: Nombre d'éléments
 * @size: Taille en octets de chaque élément
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL si erreur
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
