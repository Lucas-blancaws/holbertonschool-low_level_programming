#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - cherche dans s le premier caractère prése dans accept
 * @s: chaine a parcourir
 * @accept: caractères rechercher
 *
 * Return: pointeur sur le premier caractèretrouv� ou NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
