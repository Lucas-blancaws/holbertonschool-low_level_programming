#include "main.h"
#include <stdio.h>
/**
* swap_int - swap
* @a: nombre
* @b: nombre
* Description (): swap
* Return:valeur 0
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
