#include "main.h"
/**
* print_array - check the code for
* @a: pointeur
* @n: nombre de nombre
* Description: affiche les valeurs d'un tableau
* Return: Always 0.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}

