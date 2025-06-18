#include <stdio.h>
#include "main.h"
/**
* print_sign - imprime le signe du nombre
* @n: arguments
* Return: retourne ke chiffre imprimé
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
