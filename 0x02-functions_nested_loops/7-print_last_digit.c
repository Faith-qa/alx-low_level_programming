#include "holberton.h"
/**
 * print_last_digit - Print the last digit in a vlaue
 * @i: Intereger to be entered
 * Return: Returns the last digit of n
 *
 */

int print_last_digit(int i)
{

int last_num;

if (i < 0)
{
last_num = (i % 10) * -1;
}
else
{
last_num = i % 10;
}
_putchar ('0' + last_num);
return (last_num);
}
