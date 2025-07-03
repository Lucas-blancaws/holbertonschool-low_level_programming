#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Puissance x^y-1
 * @x: premier chiffre
 * @y: deuxieme chiffre
 *
 * Return: la puissance
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
