#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

/**
 *struct list_s - singly linked list
 *@str: string - placed in memory
 *@len: length of the string
 *@next: next point in the node
 *Description: singly linked list structure
 *for Holberton project
 */
typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
}list_t;
void liebre_tortuga(void) __attribute__ ((constructor));
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
int _strlen(const char *s);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
