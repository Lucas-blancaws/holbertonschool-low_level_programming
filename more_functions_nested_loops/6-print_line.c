#include <stdlib.h>
#include "main.h"
/**
 * print_line - Affiche une ligne avec '_'
 * @n: Nombre de caractères'_' a afficher
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
	{
		_putchar('-');
	}
		_putchar('\n');
	}
}
