#include "lists.h"

/**
 *add_node_end - adds a new node to the end
 *of a list_t
 *@head: pointer to the start of the list
 *@str: string to be copied
 *
 *Return: Pointer to new node, NULL
 *if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
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
