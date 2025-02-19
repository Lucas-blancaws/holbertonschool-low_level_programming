#include "main.h"
/**
* print_alphabetx10 - affiche l'alphabet en minuscule dix fois
* Description : Cette fonction afiche toutes les lettres de l'alphabet dix fois
* suivies d'un saut de ligne.
*/
void print_alpabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z')
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
		i++;
	}
}
