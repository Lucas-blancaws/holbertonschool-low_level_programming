#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 *
 * Description: This function prints a string using recursion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
