#include <stdio.h>
#include "main.h"
/**
 * puts2 - 1 chiffre sur 2
 * @str: pointeur sur la string a afficher
 *
 * Return: un chiifre sur 2
 */

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	for (; i < len; i += 2)
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
