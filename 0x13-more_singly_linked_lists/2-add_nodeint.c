#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning
 *of a list
 *@head: pointer to the start of the list
 *@n: integer to be copied
 *Description: Adds a new node at the beginning of a list
 *Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
