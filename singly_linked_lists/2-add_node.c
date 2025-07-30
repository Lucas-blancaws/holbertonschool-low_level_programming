#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - ajoute un nœud au début de la liste
* @head: double pointeur vers le début de la liste
* @str: chaîne à copier dans le nouveau nœud
*
* Return: adresse du nouveau nœud, ou NULL en cas d’échec
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
