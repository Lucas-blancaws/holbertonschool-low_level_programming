#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère une liste list_t.
 * @head: Pointeur vers la tête de la liste.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
