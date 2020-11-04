#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 *  @head: pointer to the start of the list
 *  @n: new pointer
 *  Return: pointer to the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
