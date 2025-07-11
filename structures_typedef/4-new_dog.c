#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Crée une copie de chaîne
 * @str: chaîne à copier
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - Crée une nouvelle structure dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Return: pointeur vers le nouveau chien, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;

	return (new);
}
