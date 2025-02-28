#include "main.h"
#include "2-strlen.c"
/**
* puts_half - nombres paires
* @str: string
* Description (): moitier
* Return:valeur 0
*/
void puts_half(char *str)
{
	int n;

	for (n = (_strlen(str) + 1) / 2; n < _strlen(str); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
