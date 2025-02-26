#include "main.h"
/**
* _puts - print les strings
* @str: string
* Description (): print strings
* Return:valeur 0
*/
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
