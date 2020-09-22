#include "holberton.h"

/**
 * times_table -prints 9 by 9 Times Table
 * Return: There's no return value
 */

void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;

			if ((result / 10) == 0)
			{
				if (column == 0)
				{
					_putchar('0');
				}
				if (column != 0)
				{
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				if (column < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

				if (column < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
