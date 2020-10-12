#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints sum of two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints sum of two numbers
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;
	int sum;
	int zero = 0;
	int i = 1;
	char error[10] = "Error";


	if (argc == 1)
	{
		printf("%d\n", zero);
		return (0);
	}
	while (i < argc - 1)
	{
		if (isdigit(atoi(argv[i])) == 0)
		{
			printf("%s\n", error);
			return (-1);
		}
		i++;
	}

	for (x = 0; x < argc; x++)
	{
		if (x > 0)
		{
			if (atoi(argv[x]) == 0)
			{
				printf("%s\n", error);
				return (1);
			}

			sum += atoi(*(argv + x));
		}
	}

	printf("%d\n", sum);

	return (0);
}
