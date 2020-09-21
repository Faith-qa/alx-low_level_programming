#include "holberton.h"
/**
*main - print 10 times alphabet
*Return: Always  0 (success)
*/
int main(void)
{
void print_alphabet_10(void);
int i;
char c;
i = 0;
while (i <= 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
_putchar('\n');
c++;
}
i++;
}
 return(0);
}
