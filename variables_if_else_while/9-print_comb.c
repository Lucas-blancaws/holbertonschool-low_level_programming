#include <stdio.h>
/**
* main- affiche toutes les combinaiaisons de de nombre a un chiffre
* Description : juste au dessus
* Return: Always (Success)
*/

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
	putchar (num);
	if (num != '9')
	putchar (',');
	putchar (' ');
}
putchar ('\n');
return (0);
}
