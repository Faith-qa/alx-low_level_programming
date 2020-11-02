#include "lists.h"

/**
 *list_len - returns the number of elements
 *in a linked list list_t
 *@h: pointer to the first node
 *Return: number of lements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
