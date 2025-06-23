#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - number 0 a 9
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
	return (0);
}
