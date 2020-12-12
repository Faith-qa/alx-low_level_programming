#include "lists.h"


/**
 *print_dlistint - prints the elementa of the list
 *@h: pointer to the first element
 *Return: number of nodesq
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
