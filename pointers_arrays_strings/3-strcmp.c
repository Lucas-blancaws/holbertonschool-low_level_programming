#include <stdio.h>
#include "main.h"
/**
 * _strcmp- compare la difference des deux chaines sinon renvoie 0
 * @s2: la source a copier
 * @s1: le nombre max de caractèe a copie
 *
 * Return: la différence des dedeuxa
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
