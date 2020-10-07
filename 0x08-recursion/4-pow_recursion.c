#include "holberton.h"
#include <stdio.h>
/**
 *_pow_recursion - returns value of x raised to y
 *@x: integer entered
 *@y: power of x
 *Return: -1 if y<0
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
{
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
