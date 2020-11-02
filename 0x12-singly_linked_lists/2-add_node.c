#include "lists.h"

/**
 *add_node - adds a new node to the beginning
 *of a list_t
 *@head: pointer to the start of the list
 *@str: string to be copied
 *
 *Return: Pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}


/**
 *_strlen - returns the length ofa string
 *@s: pointer to a string
 *Return: string length
 */
int _strlen(const char *s)
{
	int a;
	int len;

	for (a = 0; s[a] != '\0'; a++)
	{
		len++;
	}
	return (a);
}
