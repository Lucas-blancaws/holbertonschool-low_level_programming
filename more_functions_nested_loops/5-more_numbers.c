#include <stdlib.h>
#include "main.h"
/**
 * more_numbers - Affiche le dernier chiffre d'un entier
 * Return: La valeur du dernier chiffre
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
