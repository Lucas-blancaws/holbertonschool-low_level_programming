#include <stdio.h>
#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
