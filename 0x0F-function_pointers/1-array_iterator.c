#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - executes a functiongiven as parameter
 *@array: pointer array
 *@size: size of array
 *@action: pointer to a function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t b;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (b = 0; b < size; b++)
		action(array[b]);
}
