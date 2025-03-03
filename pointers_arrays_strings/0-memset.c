#include "main.h"
/**
* _memset -
* @s: pointeur
* @b: char
* @n: nombre d'octets
* Description: Write a function that fills memory with a constant byte.
* Return: Always 0.
*/
char *_memeset (char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}