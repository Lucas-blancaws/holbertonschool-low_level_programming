#include "main.h"
/**
 * _sqrt_recursion_helper - returns the natural square root of a number
 * @n: number
 * @i: number test
 * Return: if no sqrt for n return -1
 */
int _sqrt_recursion_helper(int n, int i)
{
	{
		if (i * i > n)
		{
			return (-1);
		}
		if (i * i == n)
		{
			return (i);
		}
		return (_sqrt_recursion_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Main function for calling the square root search
 * @n: number
 * Return: if no sqrt for n return -1
 */
int _sqrt_recursion(int n)
{
	{
		if (n < 0)
	{
		return (-1);
	}
		else
		return (_sqrt_recursion_helper(n, 0));
	}
}

