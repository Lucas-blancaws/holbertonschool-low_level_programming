#include "function_pointers.h"
/**
 * print_name - Appelle une fonction pour afficher un nom
 * @name: Le nom a afficher
 * @f: Fonction qui prend un char * et affiche le nom
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
