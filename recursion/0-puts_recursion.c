#include "main.h"
/**
 * _puts_recursion - print string
 * @s: pointeur
 * Return: returns string
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(s[0]);
	_puts_recursion(s + 1);
}

