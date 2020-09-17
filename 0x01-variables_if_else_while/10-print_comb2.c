#include <stdio.h>

/**
 * main - Entry point for 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x == 9 && y == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
