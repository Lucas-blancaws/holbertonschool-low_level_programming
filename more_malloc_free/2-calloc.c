#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un tableau et l'initialise
 * @nmemb: Nombre d'éléments
 * @size: Taille en octets de chaque élément
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL si erreur
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        ptr[i] = 0;
        return (ptr);
}
