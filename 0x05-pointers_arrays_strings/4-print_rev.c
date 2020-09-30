#include "holberton.h"
/**
 *print_rev - print a string, in reverse
 *@s: character integer entered
 *Return: void
 */
void print_rev(char *s)
{
	int x; /**forward*/
	int y; /**reverse/backward*/
	int l ; /**length*/

	for (x = 0; s[x] != '\0'; x++)
	{
		l = x;
	}
	y = 0;
	for (; l >= y; l--)
	{
		_putchar(s[l]);
	}
}
