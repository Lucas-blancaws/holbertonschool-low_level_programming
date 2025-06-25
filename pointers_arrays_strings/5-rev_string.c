#include <stdlib.h>
#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères
 * @s: La chaîne à inverser
 */

void rev_string(char *s)
{
	int i;
	int j = (_strlen(s) - 1);

	i = 0;

	while (j > i)
	{
		char temp = s[j];

		s[j] = s[i];
		s[i] = temp;

		i++;
		j--;
	}
}

/**
 * _strlen - Returns the length of a string
 * @s: A pointer to the string whose length is to be calculated
 *
 * Return: The length of the string (not including the null byte)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
