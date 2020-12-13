#include "lists.h"

/**
 *free_dlistint - frees memory from a  double linked list
 *@head: pointer to the first node
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = 0;

	while (head)
	{
		temp = head->next;
		free(head->prev);
		free(head);
		head = temp;
	}
}
