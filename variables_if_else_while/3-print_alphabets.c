#include <stdio.h>

/**
 * main - affiche en maj et minu
 * Description: affiche en maj et minuns
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);
	putchar ('\n');
	return (0);
}
