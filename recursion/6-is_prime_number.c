#include "main.h"

/**
 * check_prime - Vérifie si un nombe est premier de manière récursi
 * @n: le nombre a  tester
 * @i: le diviseur courant
 *
 * Return: 1 si n est premier, 0 sinon
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Détermine si un nombre est un nombre premier
 * @n: le nombre a vérifie
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
