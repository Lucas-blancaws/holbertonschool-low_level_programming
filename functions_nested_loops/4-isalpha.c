#include <stdio.h>
/**
* _isalpha - minuscule ou majuscule
* @c: compare les caracteres
* Description (): ruturn 1 si c'est en minuscule sinon 0
* Return:valeur 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
