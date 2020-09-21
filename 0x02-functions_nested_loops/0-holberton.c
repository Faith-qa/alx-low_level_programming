#include "holberton.h"
/**
 *main - printing  the word Holberton
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
char school[10] = "Holberton";
int i = 0;
while (i < 9)
{
_putchar(school[i]);
i++;
}
_putchar('\n');
return (0);
}
