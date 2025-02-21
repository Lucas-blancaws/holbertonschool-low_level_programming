#include <stdio.h>
#include "main.h"
/**
* times_table - table de multiplication
* Description:affiche les tables de 0 a 9
* Return:valeur 0
*/
void times_table(void)

{
	int n = 0;
	int multi = 0;

	while (n <= 9)
	{
		multi = 0;
		while (multi <= 9)
		{
			int produit = n * multi;

			if (produit >= 10)
			{
				_putchar (produit / 10 + '0');
			}
			_putchar (produit % 10 + '0');
			if (multi != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				putchar ('\n');
			}
			multi++;
		}
		n++;
	}
}
