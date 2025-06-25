#include <stdio.h>
#include "main.h"
/**
 * puts_half - Affiche la deuxieme moitie de la string
 * @str: pointeur de la string a afficher
 *
 * Return: The length of the string (not including the null byte)
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len + 1) / 2;
	int i = n;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


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
