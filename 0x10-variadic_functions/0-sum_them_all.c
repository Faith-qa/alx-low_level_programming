#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sums all parameters
 *@n: constant integer
 *Return: sum of all parameters if n!=0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned  int sum = 0,  i;
	va_list lst;

	va_start(lst, n);

	if (n != 0)
	{
		for (i = 0; i < n;  i++)
		{
			int p = va_arg(lst, int);

			sum += p;
		}
		va_end(lst);
		return (sum);
	}
	return (0);
}

