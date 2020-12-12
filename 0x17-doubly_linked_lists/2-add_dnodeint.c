#include "lists.h"

/**
 *add_dnodeint - adds a new node to the begining of a list
 *@head: pointer to the first node
 *@n: integer to be copied
 *Return: NULL if fail or a null element else new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
