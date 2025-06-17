#include <stdio.h>
#include <stdlib.h>
/**
* main - base 16
* Description: affiche les nombres en base 16
* Return:valeur 0
*/
int main(void)
{
	char letter;
	char nombre;

	for (nombre = 48; nombre <= 57; nombre++)
	{
		putchar(nombre);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

