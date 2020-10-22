#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - searches an integer
 *@array: pointer
 *@size: number of elements in array
 *@cmp: pointer to a function
 *Return: -1 if NULL or size <= 0 else int_index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
