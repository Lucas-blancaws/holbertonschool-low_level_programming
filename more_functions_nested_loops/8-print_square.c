#include "main.h"
#include <stdio.h>
/**
* print_square - Affiche un carré d
* @size: taille
* Description (): carre
* Return: valeur 0
*/
void print_square(int size)
{
	int i = 0;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			int j = 0;
			i++;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
}
