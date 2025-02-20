#include "main.h"
/**
 * _abs - valeur absolue
 * @c: caractere
 * Description (): calcul la valeur absolu d'un entier
 * Return: Always 0.
 */

int _abs(int c)

{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
