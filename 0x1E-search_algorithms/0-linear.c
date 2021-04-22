#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear
 * search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: int value to be searched
 * Return: -1 if value is abscent or array in NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
		return (-1);
}