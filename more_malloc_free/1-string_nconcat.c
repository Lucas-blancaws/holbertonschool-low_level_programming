#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - parcours les strings
 * @s: string
 * Description (): parcours string
 * Return:valeur 0
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	return (n);
}
/**
 * string_nconcat - Concatène deux chaînes de car
 * @s1: Première ch
 * @s2: Deuxième ch
 * @n: Nombre de caractèresde s2 a concat�
 * Return: Pointeur vers la nouvelle chaîne conca
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';
	return (new_str);
}
