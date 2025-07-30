#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Affiche tous les éléments d’une dlistint_t
* @h: pointeur vers le début de la liste
*
* Return: nombre de nœuds
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
