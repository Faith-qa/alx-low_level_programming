#include "holberton.h"
/**
 *print_square - prints a squeare
 *@size: place integer
 *Return: void
 */
void print_square(int size)
{
int i;
int m;
if (size > 0)
{
for (i = 0; i <= size; i++)
{
for (m = 0; m <= size; m++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
}
