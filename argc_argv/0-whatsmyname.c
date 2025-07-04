#include <stdio.h>

/**
 * main - imprime nom du prog
 * @argc: nombre argument  (non utilisé
 * @argv: tableau des arguments (argv[0] = nom du programme)
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
