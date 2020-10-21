#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints the name of a function
 *@name: pointer
 *@f: pointer
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
