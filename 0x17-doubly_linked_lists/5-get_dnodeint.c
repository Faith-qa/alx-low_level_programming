#include "lists.h"

/**
 *get_dnodeint_at_index - returns nth node of a list
 *@head: pointer to the first element
 *@index: index of the list
 *Return: the nth element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
