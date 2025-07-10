#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Alloue de la mémoire avec malloc
 * @b: Taille à allouer.
 *
 * Return: Pointeur vers la mémoire allouée
 * Si malloc échoue return 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
