#include <stdio.h>

/**
 * main - imprime minuscule sans q et e
 * Description: imprime minus sans q et e
 * Return: retourne 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
