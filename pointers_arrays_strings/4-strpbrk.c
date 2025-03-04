#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - recherche ds chaîn caract le premier caractère qui c
 * @s : la chaîne principa
 * @accept : la chaîne contenant les caractèr a recherch
 * description : blab
 * Return: return
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		for (; *a; a++)
		{
			if (*a == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
