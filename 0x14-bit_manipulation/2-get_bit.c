#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: long integer
 *@index: index of a bit
 *Return: value of bit at inex
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
