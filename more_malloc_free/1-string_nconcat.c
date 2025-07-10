#include <stdlib.h>

/**
 * string_nconcat - Concatène s1 avec les n premiers octets de s2
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 * @n: Nombre d'octets de s2 à concaténer
 *
 * Return: Pointeur vers la nouvelle chaîne allouée
 * ou NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (; s1[len1] != '\0'; len1++)
	{
	}
	for (; s2[len2] != '\0'; len2++)
	{
	}

	if (n >= len2)
	n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	new_str[i] = s1[i];

	for (j = 0; j < n; j++)
	new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
