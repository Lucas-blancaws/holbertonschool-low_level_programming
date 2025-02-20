#include "main.h"
/**
* _islower - minuscule ou majuscule
* @c: compare les caracteres
* Description (): return 1 si c'est en minuscule sinon 0
* Return:valeur 0
*/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
