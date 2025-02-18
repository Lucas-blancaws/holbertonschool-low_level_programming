#include <stdio.h>
/**
* main - Point d'entree
* Description: ALphabet de a-z avec 2 putchar
* Return: valeur O
*/
int main(void)
{
int a = 97;
while (a < 123)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
