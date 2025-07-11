#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Affiche les informations de la structure dog
 * @d: pointeur vers la structure à afficher
 *
 * Description: Si un élément est NULL, affiche (nil).
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
