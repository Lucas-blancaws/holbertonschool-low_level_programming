#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all single digit numbers with space and comm
 * Description: print all single digit numbers with space and comm
 * Return: 0 if succeded
 */
int main(void)
{
	int nombre;

	for (nombre = 48; nombre <= 57; nombre++)
	{
		putchar(nombre);
		if (nombre != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
