#include "main.h"
/**
* print_rev - reverse
* @s: string
* Description (): print un mot en reverse
* Return:valeur 0
*/
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	for (n--; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
