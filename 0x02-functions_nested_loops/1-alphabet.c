#include "holberton.h"
/**
 *main - print the alphabet (void)
 *Return: Always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
return (0);
}
