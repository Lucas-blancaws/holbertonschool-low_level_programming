#include "main.h"
/**
* _isalpha - return 1 maj et minuscule
* @c: caractere
* Description ():retourne 1 pour les minus et les majuscul et 0 pour le reste
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
