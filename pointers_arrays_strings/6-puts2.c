#include "main.h"
#include "2-strlen.c"
/**
* puts2 - nombres paires
* @str: string
* Description (): print les nombres paires
* Return:valeur 0
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
