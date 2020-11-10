#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list
 *@head: pointer to the first element
 *Return: number of nodes on a list
 */

size_t print_listint_safe(const listint_t *head)
{
  size_t temp;
  unasigned int cout = 1;

  temp = head;
  while (temp != NULL)
    {
      cout << temp->n << "";
      temp = temp->next;
    }
}
