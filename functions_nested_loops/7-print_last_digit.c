#include <stdio.h>
#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Affiche le dernier chiffre d'un entier
 * @n: Le nombre entier dont on veut le dernier chiffre
 * Return: La valeur du dernier chiffre
 */
int print_last_digit(int c)
{
	_putchar('0' + _abs(c % 10));
	return _abs(c % 10);
}
