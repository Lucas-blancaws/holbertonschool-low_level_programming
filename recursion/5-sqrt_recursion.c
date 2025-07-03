#include <stdio.h>
/**
 * sqrt_helper - aide pour trouve la racine carrée naturelle
 * @n: le nombre dont on cherche la racine
 * @i: le nombre test
 *
 * Return: la racine carréenaturelle
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}

#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - retourne la racine carrée naturell
 * @n: le nombre dont on cherche la racine
 *
 * Return: racine carrée naturell
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
