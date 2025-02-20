#include "main.h"
/**
* print_sign- +, - ou 0
* @n: caractere
* Description (): return 1 pour les num +, 0 pour 0 et -1 pour les num -
* Return:valeur 0
*/

int print_sign(int n)

{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
