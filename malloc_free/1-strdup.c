#include "main.h"
#include <stdlib.h>
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
	new_str = (char *) malloc((len *sizeof(char)) + 1);
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
