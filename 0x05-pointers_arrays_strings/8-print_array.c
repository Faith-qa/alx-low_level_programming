#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array
 *@n: integer placed
 *@a: integer placed
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (i == (n - 1))
{
printf("%d", a[i]);
break;
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
