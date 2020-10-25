#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints string followed by a new line
 *@seperator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: 0 if seperator = NULL
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i;
	char *p;

	va_start(nlist, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(nlist, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (seperator == NULL || i == n - 1)
			continue;
		else
			printf("%s", seperator);
	}
	va_end(nlist);
	printf("\n");
}
