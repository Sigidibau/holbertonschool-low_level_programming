#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = length;
	n->next = *head;
	*head = n;
	return (n);
}
