#include "holberton.h"
#include <stdio.h>
/**
 *rev_string - reverses a string
 *@s: character integer entered
 *Return: void
 */
int last char(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

void rev_string(char *s)
{
int len, i, half;
i = 0;
len = lastChar(s);
half = len / 2;
char temp;
while (half--)
{
trmp = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = temp;
i++;
}
}
