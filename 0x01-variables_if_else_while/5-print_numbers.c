#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define NUMBER 0
#define LIMIT 10


int main(void)
{
	int number;

	for (number = NUMBER; number < LIMIT; number++)
	{
	printf("%d", number);
	}

	printf("\n");

	return (0);
}
