#include "holberton.h"
/**
 *int _islower - checks for lower case letters
 *@c: interger to check
 * Return: (1) if lowercase and  (0) if its not
 */
int _islower(int c);
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
