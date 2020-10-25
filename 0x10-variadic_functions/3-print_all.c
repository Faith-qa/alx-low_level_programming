#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * @...: unspecified parameters
 */
void print_all(const char * const format, ...)
{
	char *p;
	int i = 0;
	va_list nlist;

	va_start(nlist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(nlist, int));
				break;
			case 'i':
			  printf("%d", va_arg(nlist, int));
					break;
			case 'f':
				printf("%f", (float)va_arg(nlist, double));
				break;
			case 's':
				p = va_arg(nlist, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;

		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n"), va_end(nlist);
}
