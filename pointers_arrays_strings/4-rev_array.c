#include <stdio.h>
#include "main.h"
/**
 * reverse_array- inverse une chaine de int
 * @a: la chaine a inverser
 * @n: le nombre de caractèe ainverser
 *
 * Return: reverse
 */


void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0;  i  < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - 1];
		a[n - 1 - i] = temp;
	}
}
