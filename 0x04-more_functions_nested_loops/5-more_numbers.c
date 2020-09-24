#include "holberton.h"
#include <stdio.h>
/**
*more_numbers - prints numbers 10 times
*Return: void
*/
void more_numbers(void)
{
int a;
int i;
int n;
for (a = 0; a != 10; a++)
{
for (i = 0; i <= 14; i++)
{
n = i;
if (i < 10)
{
_putchar('1');
n = i % 10;
}
_putchar(n + '0');
}
_putchar('\n');
}
}
