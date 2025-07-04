#include <stdio.h>

/**
 * main - Print le nbm d argument sans le nom
 * @argc: nombre argument y compris le nom du prog
 * @argv: tableau contenant les arguments (non utilisé ici)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
