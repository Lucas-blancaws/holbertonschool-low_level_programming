#include <stdlib.h>
#include "main.h"
/**
 * print_diagonal - Affiche une diagonale avec '\'
 * @n: Longueur de la diag
 * Si n est inférieu a 0 affiche saut de ligne
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
