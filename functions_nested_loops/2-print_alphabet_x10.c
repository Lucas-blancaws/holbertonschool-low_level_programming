#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/

void print_alphabet_x10(void)
{
	int c = 97;
	int boucle;

	for (boucle = 0; boucle < 10; boucle++)
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
