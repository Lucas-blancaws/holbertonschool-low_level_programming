#include "lists.h"

/**
* dlistint_len - Compte le nombre de nœuds dans une dlistint_t
* @h: pointeur vers le début de la liste
*
* Return: nombre de nœuds
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
