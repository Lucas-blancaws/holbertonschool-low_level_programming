#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau noeud au début d'une list
 * @head: Pointeur vers la tête de la list
 * @str: Chaîne de caractèr a copier
 * Return: Adresse du nouveau noeud ou NULL en cas d'éche
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
