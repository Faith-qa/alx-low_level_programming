#include "holberton.h"

/**
 *binary_to_uint - converts binary number to an int
 *@b: ointer to a string of 0 and 1
 *Return: converted Number or 0 if b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;


	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		n <<= 1;
		n += b[i] - '0';
		i++;
	}
	return (n);

}
