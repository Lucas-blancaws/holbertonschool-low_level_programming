#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Affiche les détails d'une structure dog
 * @d: Pointeur vers la structure dog afficher
 * Description: Si d est NULL, la fonction fait rien.
 * Si un élément dd est NULL, elle affiche "(nil)" a la place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
