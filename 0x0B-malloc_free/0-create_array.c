#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of char
 *@size: size of array
 *@c: char integer
 *Return: pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
  char *p = malloc(size);
  if (size == 0 || p == 0)
    return (0);
  while (size--)
    p[size] = c;
  return (p);
}
