#include "holberton.h"
/**
 *print_square - prints a squeare
 *@size: place integer
 *Return: void
 */
void print_square(int size)
{
int i, m;
for (i = 1; i <= size; i++)
{
for (m = 1; m <= size; m++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
