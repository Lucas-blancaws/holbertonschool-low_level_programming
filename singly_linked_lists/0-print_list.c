#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * list_t: liste of element
 * @h: pointeur vers tete de liste
 * Return: nmb element dans la liste
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
