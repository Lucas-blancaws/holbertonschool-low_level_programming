#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - retourne rien
 * Description : affiche le positif ou le negatif
 * Return: + ou -
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
