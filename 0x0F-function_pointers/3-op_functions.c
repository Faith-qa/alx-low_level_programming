#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition of two intergers
 * @a: first interger
 * @b: second interger
 * Return: sum of intergers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracting  two intergers
 * @a: first interger
 * @b: second interger
 * Return: product of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div -division  two intergers
 * @a: first interger
 * @b: second interger
 * Return: product of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mul - multiplying  two intergers
 * @a: first interger
 * @b: second interger
 * Return: product of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod -remainderof the division of two intergers
 * @a: first interger
 * @b: second interger
 * Return: product of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
