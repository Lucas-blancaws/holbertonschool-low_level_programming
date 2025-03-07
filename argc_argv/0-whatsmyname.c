#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments (pas  utilise)
 * @argv: Tableau des arguments
 * Return: Return 0 en cas de succès
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
