#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - calcule la longueur d'une chaîne récursivement
 * @s: la chaîne de caactèrs
 *
 * Return: la longueur de la chaîne (nombre de caractères avant '\0').
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
