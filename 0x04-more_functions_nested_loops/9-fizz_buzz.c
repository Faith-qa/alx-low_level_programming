#include <stdio.h>
#include <stdlib.h>
/**
 *main - print numbers 1 to 100
 *Return : Always (0) auccess
 *
 */

int main(void)
{
int multiples;
for (multiples = 0; multiples <= 100; multiples++)
{
if ((multiples % 3 == 0) && (multiples % 5 == 0))
{
printf("FizzBuzz");
}
else if (multiples % 3 == 0)
{
printf("Fizz");
}
else if (multiples % 5 == 0)
{
printf("Buzz");
}
else
printf("%d", multiples);
if (multiples < 100)
{
  putchar(' ');
}
}
putchar('\n');
return (0);
}
