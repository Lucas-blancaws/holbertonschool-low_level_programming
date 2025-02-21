#include "main.h"
/**
* jack_bauer - heure
* Description (): affiche l'heure
* Return:valeur 0
*/
void jack_bauer(void)

{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar (h / 10 + '0');
			_putchar (h % 10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
