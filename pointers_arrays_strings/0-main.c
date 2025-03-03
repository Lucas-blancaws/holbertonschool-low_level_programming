#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n); // Affiche "n+402"
    reset_to_98(&n); // Appelle la fonction en passant l'adresse de n
    printf("n=%d\n", n); // Affiche "n=98"
    return (0);
}
