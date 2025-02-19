#include "main.h"
/**
* print_alphabet - affiche l'alphabet en minuscules
* Description : Cette fonction affiche toutes les lettres de l'alphabet,
* suivies d'un saut de ligne.
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
