#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Crée une copie d'une chaîne de ca
 * @str: La chaîne de cara a dupliquer
 * Return: Un pointeur vers la copie de la chaîne, ou NUL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i;

	if (str == 0)
	{
		return (NULL);
	}
	new_str = malloc((strlen(str) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
