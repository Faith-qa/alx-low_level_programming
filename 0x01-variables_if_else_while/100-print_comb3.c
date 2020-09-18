#include <stdio.h>
#include <time.h>
/*
*prints all possible different combination of two digits
*Return: 0
*/

int main(void)
{
int a = 0;
int b;
int c;
while (a < 10)
{
b = 0;
while (b < 10)
{
putchar('0' + a);
putchar('o' + b);
if (!(a == 9 && b == 9))
{
putchar(',');
putchar(' ');
}
 b++;
}
 a++;
}
return (0);
}
