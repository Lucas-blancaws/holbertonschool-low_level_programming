#include <stdlib.h>

/**
 * _strdup - Duplique une chaîne
 * @str: chaîe a copier
 *a
 * Return: pointeur vers la copie ou NULL
 */
char *_strdup(char *str)
{
	char *duppli;
	unsigned int i, len;

	if (str == NULL)
		return NULL;
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	duppli = malloc((len + 1) * sizeof(char));
	if (duppli == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duppli[i] = str[i];
	}
	duppli[len] = '\0';
	return (duppli);
}
