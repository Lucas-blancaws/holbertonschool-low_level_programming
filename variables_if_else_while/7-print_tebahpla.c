#include <stdio.h>
/**
* main - Alphabet a l'envers
* Description : lire au-dessus
* Return: Always (Success)
*/

int main(void)
{
	char c;

for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
