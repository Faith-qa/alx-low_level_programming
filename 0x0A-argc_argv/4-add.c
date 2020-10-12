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
int i, j, sum;
sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
return (puts("Error"), 1);
}
}
sum += atoi(argv[i]);
}
return (printf("%d\n", sum), 0);
}
