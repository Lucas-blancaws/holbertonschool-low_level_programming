#include <stdio.h>
/**
* main - Affiche les lettres de l'alphabet en sautant le e et le q
* Description: Voir ligne du dessus
* Return: Always (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar (c);
}
putchar('\n');
return (0);
}
