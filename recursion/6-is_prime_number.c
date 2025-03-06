#include "main.h"

/**
 * verif_div  - vérifi si n est divisible par un nombre d
 * @n: nombre initial
 * @d: nombre
 * Return: return return
 */
int verif_div(int n, int d)
{
	if (d * d >= n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (verif_div(n, d + 1));
}
/**
 *  is_prime_number - Fonction main vérif si un nombre est first
 * @n: nombre initial
 * Return: return
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (verif_div(n, 5));
}
