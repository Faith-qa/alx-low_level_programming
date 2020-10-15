#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: asigned integer
 *Return: a pointer to allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
