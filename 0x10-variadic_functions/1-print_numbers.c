#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers followed by a new line
 *@seperator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: 0 if seperator = NULL
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{

	unsigned int i;
	va_list lst;

	va_start(lst, n);
	if (seperator != NULL)
	{
		for (i = 0; i < n; i++)
		{

			int p = va_arg(lst, int);

			printf("%d, ", p);

		}

	}
	va_end(lst);
	printf("\n");
}
