#include <stdio.h>
#include "main.h"
/**
 * string_toupper- string en minus vers maj
 * @str: pointeur sur la string
 *
 * Return: la phrase en maj
 */


char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
