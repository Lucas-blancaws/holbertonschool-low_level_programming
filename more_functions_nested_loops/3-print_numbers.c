#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - Affiche les nombres de 0 a 9 sur une seule ligne
 *
 * Return: Rien
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
