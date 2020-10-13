#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space
 *@str: pointer
 *Return: NULL if str=0
 */

char *_strdup(char *str)
{
int i, size;
char *a;
if (str == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
{
a = malloc(size * sizeof(*str) + 1);
/** +1 on size puts the end of string car*/
if (a == 0)
return (NULL);
else
{
for (i = 0; i <= size; i++)
a[i] = str[i];
}
}
return (a);
}
