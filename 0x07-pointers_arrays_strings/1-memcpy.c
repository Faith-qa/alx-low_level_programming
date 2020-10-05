#include "holberton.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area
 *@src: source of memory
 *@dest: memory destination
 *@n: number of bytes from memory area
 *@Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
  
