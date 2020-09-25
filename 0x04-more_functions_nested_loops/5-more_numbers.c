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
int c;
for (a = 0; a < 10; a++)
{
for (i = 0; i <= 14; i++)
{
c = i;
if (i > 9)
{
_putchar ('1');
c = i % 10;
}
_putchar('0' + c);
}
_putchar('\n');
}
}
