#include "holberton.h"
#include <stdio.h>
/**
 *reverse_array - used to reverse an array
 *@a: parameter
 *@n: size
 *Return: void
 */
void reverse_array(int *a, int n)
{
int c;
int d;
for (c = 0; c < n / 2; c++)
{
d = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = d;
}
}
