#include "lists.h"
/**
 *free_list - frees memory from list
 *@head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *temp = 0;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
