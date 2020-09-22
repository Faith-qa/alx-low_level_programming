#include "holberton.h"

/**
 * _abs - print the absolute value of integer
 * @n : interger entered
 * Return: absolute value print
 */

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
