#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Affiche une chaîne de caractèrs a l'envers
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Retour: Rien (void).
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
