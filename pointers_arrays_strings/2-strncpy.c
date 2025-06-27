#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copie une chaîne d caracteres
 * @dest: la destination
 * @src: la source a copier
 * @n: le nombre max de caractèe a copier
 *
 * Return: un pointeur vers la chaîne des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

