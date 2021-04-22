#include "search_algos.h"
/**
 * binary_search_rec - perfroms recursive binary search
 * @array: pointer to the array
 * @l: leftmost element in array
 * @r: rightmost element in array
 * @value: size of the array
 * Return: return a location of the value in aray otherwise -1
 */

int binary_search_rec(int *array, size_t l, size_t r, int value)
{
	size_t i = l;
	int mid;

	if (r < l)
		return (-1);
	printf("Searching in array: ");

	for (; i <= r; i++)
	{
		if (i == r)
		{
			printf("%d", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
	printf("\n");
	mid = l + (r - l) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_rec(array, l, mid - 1, value));
	return (binary_search_rec(array,  mid + 1, r, value));
}
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: if value is not present or NULL return -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rec(array, 0, size - 1, value));
}
