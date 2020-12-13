#include "lists.h"
/**
 * delete_dnodeint_at_index -deletes a node
 * @head: pointer to the first node
 * @index: index to be deleted
 * Return: 1 if success, - 1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp_addr;
	unsigned int count;

	temp = *head;
	count = 0;
	while (temp)
	{
		if (count == (index - 1))
		{
			temp_addr = (temp->next)->next;
			free(temp->next);
			temp->next = temp_addr;
			return (1);
		}
		else if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
