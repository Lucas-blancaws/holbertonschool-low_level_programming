#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialisation de la struct
 * @d: accede au membres de la struc
 * @name: name
 * @age: age
 * @owner: proprio
 *
 * Return: retuen
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
