#include <stdio.h>

/**
 * main - afficher nombre en base 10
 * Description: afficher nombre en base 10
 * Return: retourne 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
