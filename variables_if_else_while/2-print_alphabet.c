#include <stdio.h>
#include <ctype.h>
/**
* main - lettre minuscule
* Description: affiche les lettres minucules de la table ASCII
* Return:valeur 0
*/
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
