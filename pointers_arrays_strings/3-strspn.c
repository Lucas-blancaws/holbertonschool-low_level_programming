#include "main.h"
#include <stdio.h>
/**
* _strcmp - check the code for
* @ptr: pointeur pour acccept
* @found: vérifi si un caractèr est a accept
* Description: fonctio qui mesure la long d1 préfixe d'unechain full carac spe
* Return: 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		for (ptr = accept; *ptr; ptr++)
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
		}
		if (!*ptr)
			return (count);
		s++;
	}
	return (count);
}
