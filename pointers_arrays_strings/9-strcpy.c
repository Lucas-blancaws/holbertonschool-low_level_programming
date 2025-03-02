#include "main.h"
#include <stdio.h>
/**
* _strcpy - copie string
* @src: pointeur
* @dest: pointeur
* Description: affiche les valeurs d'un tableau
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	char *desti = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (desti);
}
