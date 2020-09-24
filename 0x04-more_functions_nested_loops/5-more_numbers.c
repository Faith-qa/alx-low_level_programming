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
for (a = 0; a < 10; a++)
{
i = 0;
while (i <= 14)
{
_putchar (i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}
_putchar ('\n');
}
