#include "holberton.h"

/**
 *print_binary - printd the binary representation
 *of a number
 *@n: usigned integer
 *Return: Number
 */
void print_binary(unsigned long int n)
{
  if (n == 0)
    _putchar('0');
  else
    {
      if (n >> 1)
	print_binary(n >> 1);
      _putchar((n & 1) + '0');
    }
}
