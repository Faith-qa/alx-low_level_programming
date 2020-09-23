#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- positive, zero, or negative
*
* Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
