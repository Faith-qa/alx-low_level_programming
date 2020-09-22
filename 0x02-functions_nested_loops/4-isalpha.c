#include "holberton.h"

/**
 * _isalpha - checks for uppercase letters a
 * @c: interger to check
 * Return: (1) if charcter is lower and (0) if not.
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
