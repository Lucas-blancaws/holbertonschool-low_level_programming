#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau noeud a la fin d'une liste list_t
 * @head: Pointeur vers la tête de la lste
 * @str: Chaîn a dupliquer et a ajouter dans noeud
 * Return: Adresse du nouveau noeud ou NULL en cas d'éche
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}
	return (new_node);
}
