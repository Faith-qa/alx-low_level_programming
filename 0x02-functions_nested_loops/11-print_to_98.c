#include "holberton.h"
#include "stdio.h"
/**
 * print_to_98 - print natural numbers to 98
 * @n: integer to start at
 * Return: Void.
 */

void print_to_98(int n)
{
int i = 0;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
else
{
for (i = n; i <= 98 ; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
putchar('\n');
}
