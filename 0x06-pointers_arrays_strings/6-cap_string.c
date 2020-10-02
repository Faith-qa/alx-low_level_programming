#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words in a string
 * @s: string to be  capitalized
 *
 * Return: Void
 */

char *cap_string(char *s)
{
int i;
i = 0;

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 97) && (s[i] <= 122))
{
s[i] -= 32;
}
if ((s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
|| s[i] == '{' || s[i] ==  '}' || s[i] == ' ' || s[i] == '\n'
|| s[i] == '\t') && s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
return (s);
}
