#include "holberton.h"
#include <stdio.h>
/**
 *swap_int - swaps the values of 2 integers
 *@a: first  integer entered
 *@b: second integer entered
 *Return: void
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
