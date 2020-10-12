#include "holberton.h"
#include <stdio.h>

/**
 *_isupper - checks for uppercase character
 *@c: integer entered
 *Return: (1) for uppercase and (0) of otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
