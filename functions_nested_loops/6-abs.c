#include <stdio.h>
#include "main.h"
/**
* _abs - chiffre absolue
* @c: chifffre a determiner l absolue
* Return: retourne ke chiffre imprimé
*/
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
