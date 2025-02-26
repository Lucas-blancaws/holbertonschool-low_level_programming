#include "main.h"
/**
* rev_string - reverse
* @s: string
* Description (): print un mot en reverse
* Return:valeur 0
*/
void rev_string(char *s)
{
	int n, i;
	char temp;

    for (n = 0; s[n] != '\0'; n++)
    {
    }
    for (i = 0; i < n / 2; i++)
    {
	    temp = s[i];
	    s[i] = s[n - 1 - i];
	    s[n - 1 - i] = temp;
    }
}
