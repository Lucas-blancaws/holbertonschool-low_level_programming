#include <stdio.h>
#include "main.h"
/**
 * print_array - Affiche la deuxieme moitie de la string
 * @a : pointeur du tableau
 * @n : nombre d'e√lement du taleau
 *
 * Return: affiche les elements du tableau suivie d une virgule et un espace
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

