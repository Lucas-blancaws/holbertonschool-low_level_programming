#include "main.h"
/**
* print_triangle - triangle
* @size: taille
* Description (): triangle
* Return: valeur0
*/
void print_triangle(int size)
{
int i;
int j;
int k;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
