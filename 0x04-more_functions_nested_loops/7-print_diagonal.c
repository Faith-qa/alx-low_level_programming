#include "holberton.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: place integer
 *Return: void
 */
void print_diagonal(int n)
{
int i;
int m;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (m = 0; m < i; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
