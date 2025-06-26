#include <stdio.h>
#include "main.h"
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
#include <stdio.h>
#include "main.h"
/**
 * _strncat - Returns the length of a string
 * @n: nombre de carac a afficher en plus de la premiere chaine
 * @dest: chaine desti
 * @src: premiere chaine
 *
 * Return: The length of the string (not including the null byte)
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t len;
	int i;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

