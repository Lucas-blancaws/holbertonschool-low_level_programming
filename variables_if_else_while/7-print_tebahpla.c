#include <stdio.h>

/**
 * main - affiche en maj et minu
 * Description: affiche en maj et minuns
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar (letter);
	putchar ('\n');
	return (0);
}
