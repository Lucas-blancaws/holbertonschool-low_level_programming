#include <stdio.h>

/**
 * main - affiche tous les nombres a un chiffre de base 10 a partir de 0
 * Description: affiche tous les nombres a un chiffre de base 10 a partir de 0
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
