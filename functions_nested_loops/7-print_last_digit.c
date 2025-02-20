#include "main.h"
/**
* print_last_digit - unite
* @n: caracteres
* Description (): return l'unite
* Return:valeur 0
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last =  last * -1;
	}
	_putchar(last + '0');
	return (last);
}
