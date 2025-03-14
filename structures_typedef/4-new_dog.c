#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Crée une copie d'une chaîne de ca
 * @str: La chaîne de cara a dupliquer
 * Return: Un pointeur vers la copie de la chaîne, ou NUL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = (char *) malloc((len * sizeof(char)) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}

/**
 * new_dog - Crée une nouvelle structure dog_t avec des copies de name et owne
 * @name: Nom du chien
 * @age: age du chien
 * @owner: Propriétaire du chin
 * Return: Pointeur vers la nouvelle structure dog_t, ou NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(dog_t));

	if (!new_d)
		return (NULL);
	new_d->name = _strdup(name);
	new_d->owner = _strdup(owner);

	if (!new_d->name || !new_d->owner)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	return (new_d);
}
