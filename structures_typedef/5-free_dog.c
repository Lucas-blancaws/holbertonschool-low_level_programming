#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Libère la mémoire allou pour un dog_t
 * @d: Pointeur vers la structure dog_t a libére
 * Description: Cette fonction véifie si le pointeur `d` est NULL.
 * Sinon elle libèe la mémoire aloe
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
