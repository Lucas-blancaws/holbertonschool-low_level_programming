#include <stdio.h>
#include "main.h"
/**
 * leet - transforme les lettres minus et maj en chiffres demandee
 * @str: The string to capitalize.
 *
 * Return: la string modifie
 */

char *leet(char *str)
{
	char lettres[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lettres[j] || str[i] == lettres[j] - 32)
				str[i] = num[j];
		}
	}
	return (str);
}
