#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the value to be checked
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
