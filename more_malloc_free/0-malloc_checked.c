#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc
 * @b: nb octet a allouer
 * Return: vers memoire allllouer
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}

