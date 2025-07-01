#include <stdio.h>
#include "main.h"
/**
 * _strspn - calcule la longueur du préfix contenant
 * des caractères présents dans acpt
 * @s: La chaîe a analyser
 * @accept: La chaîne contenant les caractères acct
 *
 * Return: Le nombre de caractèresde s qui sont dans accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
		}
		if (found == 0)
		{
			return (i);
		}
	}
	return (i);
}
