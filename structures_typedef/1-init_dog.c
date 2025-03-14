#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Iniatialise une variable de type struct dog.
 * @d: Pointeur vers la structure initialiser.
 * @name: Nom du chien.
 * @age: age du chien.
 * @owner: Nom du propriétaire
 * Description: Cette fonction initialise une struc `dog` avec les valeurs
 * fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
