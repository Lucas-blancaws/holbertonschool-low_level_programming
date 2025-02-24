#include "main.h"
/**
* more_numbers - 0 a 14 10x
* Description (): nombre de 0 a 14 10x
* Return: valeur 0
*/
void more_numbers(void)
{
	int mult;
	int i;

	for (mult = 0; mult <= 9; mult++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
